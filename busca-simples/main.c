#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 10

int buscaSimples(int vetor[TAM], int valorProcurado, int *posicao){

    bool valorFoiEncontrado;
    int cont;

    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
                valorFoiEncontrado = true;
                *posicao = cont;
        }
    }

    if(valorFoiEncontrado){
        return 1;
    }else{
        return 0;
    }

}

int main()
{

    setlocale(LC_ALL, "");

    int vetor[TAM] = {10,20,30,40,50,60,70,80,90,100};
    int valorProcurado, posicao;

    for(int i = 0; i < TAM; i++){
            printf("%d ", vetor[i]);
    }

    printf("\nQual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    if(buscaSimples(vetor, valorProcurado, &posicao) == 1){
        printf("O valor foi encontrado na posição %d do vetor", posicao);
    }else{
        printf("O valor não foi encontrado!");
    }

    return 0;
}
