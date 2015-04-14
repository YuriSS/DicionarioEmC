typedef struct No {
    char palavra[200];
    struct No *esq, *dir;
} No;
 
typedef struct Tree {
    No *root;
} Tree;
 
 
 
No* novoNo(char palavra[200]) {
    No* novo = (No *)malloc(sizeof(No));
    strcpy(novo->palavra, palavra);
    novo->esq = novo->dir = NULL;
    return novo;
}
 
Tree* novaTree(char palavra[]) {
    Tree* nova = (Tree *)malloc(sizeof(Tree));
    nova->root = novoNo(palavra);
    return nova;
}
 
 
 
void push(No* no, char palavra[]) {
    if(no != NULL) {
        if(strcmp(palavra, no->palavra) < 0) {
            if(no->esq == NULL) {
                no->esq = novoNo(palavra);
            } else {
                push(no->esq, palavra);
            }
 
        } else if(strcmp(palavra, no->palavra) > 0) {
            if(no->dir == NULL) {
                no->dir = novoNo(palavra);
            } else {
                push(no->dir, palavra);
            }
 
        }
 
    }
}
 
 
 
void inorder(No* no) {
    if(no != NULL) {
        inorder(no->esq);
        printf("%s\n", no->palavra);
        inorder(no->dir);
    }
}
