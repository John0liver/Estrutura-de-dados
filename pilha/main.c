#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 10

//Confere se a pilha está vazia
bool pilhaVazia(int topo){

    if(topo == -1){
        return true;
    }else{
        return false;
    }

}

//Confere se a pilha está vazia
bool pilhaCheia(int topo){

    if(topo == TAM - 1){
        return true;
    }else{
        return false;
    }

}

//Retorna o tamanho da pilha
int tamanhoPilha(int topo){
    return topo + 1;
}

//Retorna o último valor da pilha
int getPilha(int pilha[TAM], int *topo){

    if(pilhaVazia(*topo)){
        printf("A pilha está vazia.");
        return 0;
    }else{
        return pilha[*topo];
    }

}

//Imprime a pilha
void imprimePilha(int pilha[TAM], int topo){

    for(int i = 0;i < TAM;i++){
        printf("%d ", pilha[i]);
    }

    printf("\nTopo: %d", topo);
    printf("\nTamanho da pilha: %d", tamanhoPilha(topo));

}

//Adiciona um valor na pilha
void pilhaPush(int pilha[TAM], int valor, int *topo){

    if(pilhaCheia(*topo)){
        printf("pilha cheia!");
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }

}

//Remove um valor da pilha
void pilhaPop(int pilha[TAM], int *topo){

    if(pilhaVazia(*topo)){
        printf("pilha vazia!");
    }else{
        printf("\nValor retirado: %d", pilha[*topo]);
        pilha[*topo] =  0;
        *topo = *topo - 1;
    }

}

//Cria uma pilha
void criaPilha(int pilha[TAM], int *topo){

    *topo = -1;

    for(int i =0; i < TAM ;i++){
        pilha[i] = 0;
    }

}


int main()
{

    setlocale(LC_ALL, "");

    int pilha[TAM];
    int topo = -1;

    int opc, valor;

    criaPilha(pilha, &topo);

    do{
        printf("ESCOLHA UMA OPÇÃO: \n");
        printf("Digite 1 para colocar valor na pilha.\n");
        printf("Digite 2 para retirar valor da pilha.\n");
        printf("Digite 3 para saber qual último número da pilha.\n");
        printf("Digite 4 para saber o tamanho da pilha.\n");
        printf("Digite 0 para sair.\n");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                system("cls");
                imprimePilha(pilha, topo);

                printf("\n\nDigite um valor para colocar na pilha: \n");
                scanf("%d", &valor);

                pilhaPush(pilha, valor, &topo);
                printf("\n");

                imprimePilha(pilha, topo);
                printf("\n\n");

                system("pause");
                system("cls");

                break;
            case 2:
                system("cls");

                imprimePilha(pilha, topo);
                printf("\n\n");

                pilhaPop(pilha, &topo);
                printf("\n\n");

                imprimePilha(pilha, topo);
                printf("\n\n");

                system("pause");
                system("cls");

                break;
            case 3:
                system("cls");

                if(getPilha(pilha, &topo) > 0){
                    printf("%d", getPilha(pilha, &topo));
                }else{
                    getPilha(pilha, &topo);
                }

                printf("\n\n");
                system("pause");
                system("cls");

                break;
            case 4:
                system("cls");

                printf("Tamanho da pilha: %d", tamanhoPilha(topo));

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
