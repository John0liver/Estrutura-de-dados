#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 10

void imprimeFila(int fila[TAM], int tamanho){

    for(int i = 0; i < TAM; i++){
        printf("%d ", fila[i]);
    }

}

void criaFila(int *frente, int *tras){

    *frente = 0;
    *tras = -1;

}

bool filaVazia(int frente, int tras){

    if(frente > tras){
        return true;
    }else{
        return false;
    }

}

bool filaCheia(int tras){

    if(tras == TAM -1){
        return true;
    }else{
        return false;
    }

}

void enfileiraFila(int fila[TAM], int valor, int *tras){

    if(filaCheia(*tras)){
        printf("\nFila cheia!\n");
    }else{
        *tras = *tras + 1;
        fila[*tras] = valor;
    }

}

void desenfileiraFila(int fila[TAM], int *frente, int tras){

    if(filaVazia(*frente, tras)){
        printf("Impossível desenfileirar um lista vazia.\n\n");
    }else{
        printf("O valor %d foi removido.\n\n", fila[*frente]);
        fila[*frente] = 0;
        *frente = *frente + 1;
    }

}

int tamanhoFila(int frente, int tras){

    return (tras - frente) + 1;

}

int main()
{

    setlocale(LC_ALL, "");

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente, tras, valor, opc;

    criaFila(&frente, &tras);

    do{
        printf("ESCOLHA UMA OPÇÃO: \n");
        printf("Digite 1 para colocar valor na fila.\n");
        printf("Digite 2 para retirar valor da fila.\n");
        printf("Digite 0 para sair.\n");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                system("cls");
                imprimeFila(fila, tamanhoFila(frente, tras));

                printf("\n\nDigite um valor para colocar na pilha: \n");
                scanf("%d", &valor);

                enfileiraFila(fila, valor, &tras);
                printf("\n");

                imprimeFila(fila, tamanhoFila(frente, tras));
                printf("\n\n");

                system("pause");
                system("cls");

                break;
            case 2:
                system("cls");

                imprimeFila(fila, tamanhoFila(frente, tras));
                printf("\n\n");

                desenfileiraFila(fila, &frente, tras);

                imprimeFila(fila, tamanhoFila(frente, tras));
                printf("\n\n");

                system("pause");
                system("cls");

                break;
            case 0:
                break;
            default:
                printf("\n\n");

                printf("Digite um opção válida.");

                printf("\n\n");
                system("pause");
                system("cls");

                break;
        }

    }while(opc != 0);


    return 0;
}
