/*
    Transformação de Recursivos para Iterativos

    Exercício 8 - Transformar Maior Elemento em Iterativo

    Pegue a função recursiva do exercício 2 e implemente uma versão iterativa
    para encontrar o maior elemento do vetor.
*/

#include <iostream>
#include <windows.h>

using namespace std;

int maior_elemento(int vet[], int n) {
    int maiorForNow = vet[n];

    for (int i=n; i>=0; i--) {
        if (vet[i] > maiorForNow) {
            maiorForNow = vet[i];
        }

        else {
            continue;
        }
    }

    return maiorForNow;
}

int main() {
    int n, maiorElemento;

    cout << endl << "BUSCADOR DE MAIOR VALOR" << endl;
    cout << "Quantos números inteiros deseja inserir no vetor? -> ";
    cin >> n;

    int vet[n];

    for(int i=0; i<n; i++) {
        cout << endl << i+1 << "º NÚMERO" << endl;
        cout << "-> ";
        cin >> vet[i];
    }

    cout << endl << "Vetor preenchido!";
    Sleep(1000);

    maiorElemento = maior_elemento(vet, n);

    cout << endl << endl << "O maior número do vetor é " << maiorElemento << ".";

    return 0;
}