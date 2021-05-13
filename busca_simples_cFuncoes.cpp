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

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
    //Auxiliar Contador
    int i;

    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado;

    //Percorre a lisa em busca de valor
    for(i = 0 ; i < TAM ; i++){
        if(vetor[i] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = i;
        }
    }

    if(valorFoiEncontrado){
        return 1;
    } else {
        return -1;
    }
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

    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada)== 1){
        cout << "O valor foi encontrado na posição: " << posicaoEncontrada;
    } else {
        cout << "O valor não foi encontrado";
    }

return 0;
}
