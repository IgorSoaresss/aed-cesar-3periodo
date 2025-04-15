/*
    Exercícios sobre Filas (4 exercícios)

    Exercício 11 - Simular Atendimento em um Banco Usando Fila

    Crie um programa que simule uma fila de atendimento bancário, aonde os
    clientes chegam e são atendidos na ordem de chegada.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 5

typedef struct Fila {
    int dado[MAX];
    int frente, tras;
} Fila;

void initializeQueue(Fila* fila) {
    fila->frente = -1;
    fila->tras = -1;
}

bool isVazia(Fila* fila) {
    return (fila->frente == -1);
}

bool isCheia(Fila* fila) {
    return (fila->frente == (fila->tras + 1) % MAX);
}

void enqueue(Fila* fila, int id) {
    if (isCheia(fila)) {
        cout << "Sem vagas! Não foi possível realizar a operação." << endl;
        return;
    }

    if (isVazia(fila)) {
        fila->frente = 0;
    }

    fila->tras = (fila->tras + 1) % MAX;
    fila->dado[fila->tras] = id;
    cout << "O cliente " << id << " entrou na fila." << endl;
}

int dequeue(Fila* fila) {
    if (isCheia(fila)) {
        cout << "Fila vazia!" << endl;
        return -1;
    }

    int atendido = fila->dado[fila->frente];
    
    if (fila->frente == fila->tras) {
        fila->frente = fila->tras = -1;
    }
    
    else {
        fila->frente = (fila->frente + 1) % MAX;
    }
    
    cout << "Cliente " << atendido << " foi atendido." << endl;
    return atendido;
}

void displayQueue(Fila* fila) {
    if (isVazia(fila)) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "Clientes na fila: ";
    int i = fila->frente;

    while (i != fila->tras) {
        cout << fila->dado[i] << " ";
        i = (i + 1) % MAX;
    }

    cout << fila->dado[fila->tras] << endl;
}

int main() {
    Fila fila;
    initializeQueue(&fila);

    // exemplos

    enqueue(&fila, 101);
    enqueue(&fila, 102);
    enqueue(&fila, 103);
    displayQueue(&fila);

    dequeue(&fila);
    displayQueue(&fila);

    enqueue(&fila, 104);
    enqueue(&fila, 105);
    enqueue(&fila, 106);
    displayQueue(&fila);

    return 0;
}
