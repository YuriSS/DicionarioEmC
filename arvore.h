
typedef struct No {
	char palavra[201];
	struct No *esq, *dir;
}No;

typedef struct Arvore {
	No *raiz;
}Arvore;

/* [INI] Inicializadores */
	No* novoNo(char palavra[200]) {
		No* novo = (No *)malloc(sizeof(No));
		novo->esq = novo->dir = NULL;
		strcpy(novo->palavra, palavra);
		return novo;
	}

	Arvore* novaArvore(char palavra[200]) {
		Arvore* novo = (Arvore *)malloc(sizeof(Arvore));
		novo->raiz = novoNo(palavra);
		return novo;
	}
/* [FIM] Inicializadores */


/* [INI] Inserção */
	void push(No* no, char palavra[200]) {
		if(no != NULL) {
			if(strcmp(no->palavra, palavra) > 0) {
				if(no->esq == NULL) {
					No* novo = novoNo(palavra);
					no->esq = novo;
				} else {
					push(no->esq, palavra);
				}
			} else if(strcmp(no->palavra, palavra) < 0) {
				if(no->dir == NULL) {
					No* novo = novoNo(palavra);
					no->dir = novo;
				} else {
					push(no->dir, palavra);
				}
			}
		}
	}
/* [FIM] Inserção */


/* [INI] Inorder */
	void inorder(No* no) {
		if(no != NULL) {
			inorder(no->esq);
			printf("%s\n", no->palavra);
			inorder(no->dir);
		}
	}
/* [FIM] Inorder */