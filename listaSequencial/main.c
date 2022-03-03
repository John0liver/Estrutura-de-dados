#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Aloca um vetor do tamanho pedido
int* alocaVetor(int tam){

    //Cria um ponteiro auxiliar
    int *aux;

    //Aloca memória para o novo vetor
    aux = (int *) malloc(tam * sizeof(int));

    return aux;

}

//Imprime a lista sequencial
void imprimeSequencial(int *vetor, int tamanhoDaListaSequencial){

    int i;

    //Exibindo valores
    for(i = 0; i < tamanhoDaListaSequencial; i++){
        printf("\nValor %d: %d", i, vetor[i]);
    }

}

int main()
{

    int *vetorLidoNaHora, tamanhoDaLista, i;

    printf("\nDigite o tamanho do vetor:  ");
    scanf("\n%d", &tamanhoDaLista);

    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

    for(i = 0; i < tamanhoDaLista; i++){
        printf("\nDigite um valor: ");
        scanf("\n%d", &vetorLidoNaHora[i]);
    }

    imprimeSequencial(vetorLidoNaHora, tamanhoDaLista);


    return 0;
}
