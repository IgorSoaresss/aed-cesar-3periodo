/*
    Exercícios de Recursividade

    Exercício 4 - Produto de Dois Números Usando Somas Sucessivas

    Implemente uma função recursiva que calcula o produto de dois números
    inteiros a e b apenas usando somas sucessivas (sem usar *).

    Exemplo:
    • produto(5, 3) → 5 + 5 + 5 = 15
    • produto(7, 2) → 7 + 7 = 14
*/

#include <iostream>

using namespace std;

int produto(int a, int b) {
    
    if (b == 1) {
        return a;
    }

    else {
        return a + produto (a, b-1);
    }
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