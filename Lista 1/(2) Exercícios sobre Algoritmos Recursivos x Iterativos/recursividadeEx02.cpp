/*
    Exercícios de Recursividade

    Exercício 2 - Maior Elemento em um Vetor

    Crie uma função recursiva que recebe um vetor de inteiros e seu tamanho n e
    retorna o maior valor presente no vetor.

    Exemplo:
    int maior_elemento(int vet[], int n);
*/

#include <iostream>
#include <windows.h>

using namespace std;

int maior_elemento(int vet[], int n) {
    int maiorForNow;

    if (n == 1) {
        return vet[0];
    }

    maiorForNow = maior_elemento(vet, n-1);

    if (vet[n-1] > maiorForNow) {
        return vet[n-1];
    }

    else {
        return maiorForNow;
    }
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