#include <stdio.h>
#include <stdlib.h>
#include "L_seq.h"

void main() {

    char teste[10];

    criar(teste);
    int opc;

    printf("\t\tEDITOR DE LISTAS\n\n");
    printf("\n[1] - EXIBIR LISTA");
    printf("\n[2] - INSERIR");
    printf("\n[3] - REMOVER");
    printf("\n[4] - EXIBIR ELEMENTO");
    printf("\n[5] - EXIBIR POSICAO");
    printf("\n[6] - ESVAZIAR");
    printf("\n[0] - SAIR");

    printf("\n\n\nDIGITE SUA OPCAO: ");
    scanf("%i", &opc);
    printf("\n\n\n");

    switch(opc) {
        case 1:

            break;
        case 2:
            printf("PEGOU 2");
            break;
        case 3:
            printf("PEGOU 3");
            break;
        case 4:
            printf("PEGOU 4");
            break;
        case 5:
            printf("PEGOU 5");
            break;
        case 6:
            printf("PEGOU 6");
            break;
        case 0:
            printf("PEGOU 0");
            break;
        default:
            printf("DEFAULT");
            break;
    }

}


