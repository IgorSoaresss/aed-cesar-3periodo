/*
    Transformação de Recursivos para Iterativos

    Exercício 9 - Transformar Soma dos Dígitos em Iterativo

    Pegue a função do exercício 3 e implemente uma versão iterativa que calcula
    a soma dos dígitos.
*/

#include <iostream>

using namespace std;

int soma_digitos(int n) {
    int soma=0;

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    return soma;
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