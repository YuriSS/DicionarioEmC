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
		if(texto[i] == '.' || texto[i] == ',' || texto[i] == '#') {
			texto[i] = ' ';
		}
		texto[i] = tolower(texto[i]);
		i++;
	}

	printf("\n\n%s\n\n", texto);

	return 0;

}