/*
    Transformação de Recursivos para Iterativos

    Exercício 10 - Transformar Produto de Dois Números em Iterativo

    Pegue a função do exercício 4 e implemente uma versão iterativa que calcula
    o produto usando apenas somas sucessivas.
*/

#include <iostream>

using namespace std;

int produto(int a, int b) {
    int acumulador = 0;

    for (int i=b; i>0; i--) {
        acumulador += a;
    }

    return acumulador;
}

int main() {
    int a, b, resultado;

    cout << endl << "CALCULADORA - APENAS MULTIPLICAÇÃO" << endl;
    cout << "Digite 2 números para serem multiplicados, um de cada vez." << endl;

    cout << "-> ";
    cin >> a;

    cout << "-> ";
    cin >> b;

    resultado = produto(a, b);

    cout << endl << "O resultado de " << a << "x" << b << " é " << resultado;

    return 0;
}