#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 11

int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicao)
{

    int esquerda = 0, direita = TAM -1, meio;

    while(esquerda <= direita){
        meio = (esquerda + direita) / 2;

        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            return 1;
        }

        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }
        else{
            direita = meio - 1;
        }
    }

    return 0;

}

int main()
{

    setlocale(LC_ALL, "");

    int vetor[TAM] = {10,20,30,40,50,60,70,80,90,100,110};
    int valorProcurado, posicao;

    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nQual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    if(buscaBinaria(vetor, valorProcurado, &posicao) == 1){
        printf("O valor foi encontrado na posição %d do vetor", posicao);
    }
    else{
        printf("O valor não foi encontrado!");
    }

    return 0;
}
