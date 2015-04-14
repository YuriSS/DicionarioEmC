#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arvore.h"

int main() {
    Tree* a;
    char linha[200], *m;
    char expReg[] = "qwertyuiopasdfghjklzxcvbnm";
    int i,j,flag,first = 0;
 
    while(fgets(linha, 200, stdin)) {
        char tmp;
        i=0;
        while(linha[i]) {
            linha[i] = tolower(linha[i]);
            flag = j = 0;
            while(expReg[j]) {
                if(linha[i] == expReg[j]) {
                    flag = 1;
                }
                j++;
            }
            if(flag == 0) {
                linha[i] = ' ';
            }
            i++;
        }
        m = strtok(linha, " ");
        while(m != NULL) {
            if(first == 0) {
                a = novaTree(m);
                first = 1;
            } else {
                push(a->root, m);
            }
            m = strtok(NULL, " ");
        }
    }
 
    inorder(a->root);
 
    return 0;
 
}
