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

void bubbleSort(int vetor[TAM]){

    int x, y, aux;

    for(x=0; x < TAM; x++){
        for(y = x + 1; y < TAM; y++){

            imprimeVetor(vetor);

            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }

}

int main()
{

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    bubbleSort(vetor);

    imprimeVetor(vetor);

    return 0;
}
