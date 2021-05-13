#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
#include <locale.h>

using namespace std;

void imprime_vetor(int vetor[TAM]){

    int i;

    for(i = 0;i < TAM; i++){
        cout << vetor[i] << "-";
    }
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
    int esquerda = 0;       //LIMITE ESQUERDA
    int direita = TAM - 1;  //LIMITE DA DIREITA
    int meio;               //O MEIO ONDE ESTÁ O CURSOR


    while(esquerda <= direita ){
        //DEFINE O MEIO DA ANALISE
        meio = (esquerda + direita)/2;

        //QUANDO O VALOR É ENCONTRADO NO MEIO
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        //AJUSTANDO OS LIMITES DE BUSCA
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
            } else {
            direita = meio - 1;
        }
    }
    return -1;
}
int main(){

    setlocale(LC_ALL, "");

    int vetor[10] = {10, 40, 5, 7, 9, 23, 87, 100, 1, 32};
    int valorProcurado;
    int posicao;
    int i;
    int posicaoEncontrada;
    bool valorFoiEncontrado;

    imprime_vetor(vetor);

    cout << "\nQual numero deseja encontrar?";
    cin  >> valorProcurado;

    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada)== 1){
        cout << "O valor foi encontrado na posição: " << posicaoEncontrada;
    } else {
        cout << "O valor não foi encontrado";
    }

return 0;
}
