#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprimeVetor(int vetor[]){

    printf("\n");
    for(int i = 0; i < TAM; i++){
        printf("|%d| ", vetor[i]);
    }
    printf("\n");

}

void selectionSort(int vetor[TAM]){

    //Recebe a posição inicial para o menor valor
    int posicaoMenorValor, aux, i, j;

    //Analisa os elementos na frente
    for(i = 0; i <TAM; i++){
        posicaoMenorValor = i;

        for(j = i + 1; j < TAM; j++){

            //Caso encontre um valor menor na frente dos analisados
            if(vetor[j] < vetor[posicaoMenorValor]){
                posicaoMenorValor = j;
            }
        }

        //Verifica se houve mudança e troca os valores
        if(posicaoMenorValor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenorValor];
            vetor[posicaoMenorValor] = aux;
        }

        imprimeVetor(vetor);

    }

}

int main()
{

   int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    imprimeVetor(vetor);

    selectionSort(vetor);

    return 0;
}
