/*
    Exercícios de Recursividade

    Exercício 5 - Contagem Regressiva

    Crie uma função recursiva que recebe um número n e imprime uma contagem
    regressiva até 0.

    Exemplo: contagem_regressiva(5) → 5, 4, 3, 2, 1, 0.
*/

#include <iostream>
#include <windows.h>

using namespace std;

void contagem_regressiva(int n) {
    if (n<=0) {
        cout << "0.";
    }

    else {
        cout << n << ", ";
        Sleep(500);
        contagem_regressiva(n-1);
    }
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