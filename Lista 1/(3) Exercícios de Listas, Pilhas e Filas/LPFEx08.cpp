/*
    Exercícios sobre Pilhas (4 exercícios)

    Exercício 8 - Converter um Número Decimal para Binário Usando Pilha

    Crie um programa que converta um número decimal em binário usando uma
    pilha.

    Exemplo:
    entrada: 10 → saída: 1010
    entrada: 25 → saída: 11001
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX 32

typedef struct Pilha {
    int dado[MAX];
    int top;
} Pilha;

void empilhar(Pilha* pilha) {
    pilha->top = -1;
}

void push(Pilha* pilha, int letra) {
    if (pilha->top < MAX - 1) {
        pilha->dado[++(pilha->top)] = letra;
    }
}

int pop(Pilha* pilha) {
    if (pilha->top >= 0) {
        return pilha->dado[(pilha->top)--];
    }
    return -1;
}

void decimalToBinary(int number) {
    Pilha pilha;
    empilhar(&pilha);

    if (number == 0) {
        cout << "0" << endl;
        return;
    }

    while (number > 0) {
        push(&pilha, number % 2);
        number /= 2;
    }

    while (pilha.top >= 0) {
        cout << pop(&pilha);
    }
    cout << endl;
}

int main() {
    int number1 = 10;
    int number2 = 25;

    decimalToBinary(number1);
    decimalToBinary(number2);

    return 0;
}
