/*
    Transformação de Recursivos para Iterativos

    Exercício 7 - Transformar Contagem Regressiva em Iterativa

    Pegue a função recursiva do exercício 5 e implemente uma versão iterativa
    usando for ou while.
*/

#include <iostream>
#include <windows.h>

using namespace std;

void contagem_regressiva(int n) {
    for (int i=n; i>0; i--) {
        cout << i << ", ";
        Sleep(500);
    }

    cout << "0.";
}

int main() {
    int n;

    cout << endl << "CONTAGEM REGRESSIVA" << endl;

    cout << "Digite um número para eu fazer uma contagem regressiva! -> ";
    cin >> n;

    cout << endl << "Aqui está: " << endl;
    contagem_regressiva(n);

    return 0;
}