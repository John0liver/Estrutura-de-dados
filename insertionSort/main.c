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
            //Posiciona os elementos uma posi��o para frente
            vetor[j + 1] = vetor[j];
            //Faz o j andar para tr�s
            j = j - 1;
        }

        //Agora que o espa�o foi aberto colocamos o atual, menor n�mero, na posi��o correta
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
