#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arvore.h"

int main() {

	//Arvore* tree;
	char texto[10000];
	int i=0, tam;

	fgets(texto, 10000, stdin);
	tam = strlen(texto);

	while(i < tam) {
		if(texto[i] == EOF) {
			printf("%d veio\n", i);
		}
		i++;
	}

	return 0;

}