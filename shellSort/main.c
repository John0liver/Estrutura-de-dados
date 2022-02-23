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

void shellSort(int vetor[TAM]){

    int i, j, atual;
    int h = 1;

    while(h < TAM){
        h = 3*h+1;
    }

    while(h > 1){

        //Reduz a dist�ncia entre as an�lises
        h = h / 3;

        for(i = h; i < TAM; i++){

                //Elemento atual em an�lise
                atual = vetor[i];

                //Elemento anterior ao analisado
                j = i - h;

                //Analisando membros anteriores
                while( (j >= 0) && (atual < vetor[j]) ){

                    //Posiciona os elementos uma posi��o para frente
                    vetor[j + h] = vetor[j];

                    //Faz o j andar para tr�s
                    j = j - h;

                }

                //Agora que o espa�o foia aberto, colocamos o atual (menor n�mero) na posi��o correta
                vetor[j + h] = atual;

                imprimeVetor(vetor);

        }
    }

}

int main()
{

   int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

   imprimeVetor(vetor);

    shellSort(vetor);

    return 0;
}
