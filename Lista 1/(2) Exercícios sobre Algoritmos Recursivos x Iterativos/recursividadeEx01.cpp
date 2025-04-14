/*
Exercícios de Recursividade

Exercício 1 - Número de Dígitos de um Inteiro

Implemente uma função recursiva que recebe um número inteiro n e retorna a
quantidade de dígitos que ele possui.
Exemplo:
• contar_digitos(12345) → 5
• contar_digitos(7) → 1
*/

#include <iostream>

using namespace std;

int contar_digitos(int n) {
    if (n < 10) {
        return 1;
    }

    return 1 + contar_digitos(n / 10);
}

int main() {
    int n, numDigitos;

    cout << endl << "CONTADOR DE DÍGITOS" << endl;
    cout << "Insira um número inteiro qualquer -> ";
    cin >> n;

    numDigitos = contar_digitos(n);

    cout << "O número " << n << " tem " << numDigitos << " dígitos.";

    return 0;
}