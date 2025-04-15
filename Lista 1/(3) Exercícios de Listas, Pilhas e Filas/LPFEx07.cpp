/*
    Exercícios sobre Pilhas (4 exercícios)

    Exercício 7 - Inverter uma String Usando uma Pilha

    Implemente um programa que use uma pilha para inverter uma string.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX 100

typedef struct Pilha {
    char dado[MAX];
    int top;
} Pilha;

void empilhar(Pilha* pilha) {
    pilha->top = -1;
}

void push(Pilha* pilha, char letra) {
    if (pilha->top < MAX - 1) {
        pilha->dado[++(pilha->top)] = letra;
    }
}

char pop(Pilha* pilha) {
    if (pilha->top >= 0) {
        return pilha->dado[(pilha->top)--];
    }
    return '\0';
}

void inverterString(const char* str) {
    Pilha pilha;

    empilhar(&pilha);

    for (int i = 0; str[i] != '\0'; i++) {
        push(&pilha, str[i]);
    }

    while (pilha.top >= 0) {
        cout << pop(&pilha);
    }

    cout << endl;
}

int main() {
    const char* str = "Hello, World!";

    inverterString(str);

    return 0;
}
