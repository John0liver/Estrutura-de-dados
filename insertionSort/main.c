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

void insertionSort(int vetor[TAM]){

    int i, j, atual;

    for(i=1; i < TAM; i++){

        //Elemento atual
        atual = vetor[i];

        //Elemento anterior ao atualizado
        j = i - 1;

        //Analisando membros anteriores
        while((j >= 0) && (atual < vetor[j])) {
            //Posiciona os elementos uma posição para frente
            vetor[j + 1] = vetor[j];
            //Faz o j andar para trás
            j = j - 1;
        }

        //Agora que o espaço foi aberto colocamos o atual, menor número, na posição correta
        vetor[j + 1] = atual;

            imprimeVetor(vetor);


    }

}

int main()
{

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    imprimeVetor(vetor);

    insertionSort(vetor);

    return 0;
}
