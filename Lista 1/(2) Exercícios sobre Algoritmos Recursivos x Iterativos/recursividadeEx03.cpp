/*
    Exercícios de Recursividade

    Exercício 3 - Soma dos Dígitos de um Número

    Implemente uma função recursiva que recebe um número inteiro n e retorna a
    soma de seus dígitos.

    Exemplo: soma_digitos(1234) → 1 + 2 + 3 + 4 = 10.
*/

#include <iostream>

using namespace std;

int soma_digitos(int n) {
    if (n < 10) {
        return n;
    }

    else {
        return (n%10) + soma_digitos(n/10);
    }
}

int main() {
    int n, somaDigitos;

    cout << endl << "SOMADOR DE DÍGITOS" << endl;

    cout << "Digite um número inteiro qualquer -> ";
    cin >> n;

    somaDigitos = soma_digitos(n);

    cout << endl << "A soma dos dígitos de " << n << " é " << somaDigitos;

    return 0;
}