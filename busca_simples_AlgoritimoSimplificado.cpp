#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "");

    int vetor[10] = {10, 40, 5, 7, 9, 23, 87, 100, 1, 32};
    int valorProcurado;
    int posicao;
    int i;
    int posicaoEncontrada;
    bool valorFoiEncontrado;

    for(i = 0;i < TAM; i++){
         cout << vetor[i] << "-";
    }

    cout << "\nQual numero deseja encontrar?";
    cin  >> valorProcurado;

    for(i = 0 ; i < TAM ; i++){
            if(vetor[i] == valorProcurado){
                valorFoiEncontrado = true;
                posicaoEncontrada = i;
            }
    }

    if(valorFoiEncontrado){
      cout << "O valor foi encontrado na posição: " << posicaoEncontrada;
    } else {
        cout << "Valor não encontrado" ;
    }




return 0;
}
