/*
    Exercícios sobre Filas (4 exercícios)

    Exercício 9 - Implementação de uma Fila com Vetor

    Implemente uma fila usando um vetor e forneça as seguintes operações:
    • enqueue: inserir um elemento no final da fila.
    • dequeue: remover um elemento do início da fila.
    • front: exibir o primeiro elemento.
    • isEmpty: verificar se a fila está vazia.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX 100

typedef struct Fila {
    int dado[MAX];
    int prox;
    int ant;
} Fila;

void enfileirar(Fila* fila) {
    fila->prox = 0;
    fila->ant = -1;
}

void enqueue(Fila* fila, int valor) {
    if (fila->ant < MAX - 1) {
        fila->dado[++(fila->ant)] = valor;
    }
    
    else {
        cout << "Fila cheia." << endl;
    }
}

int dequeue(Fila* fila) {
    if (fila->prox <= fila->ant) {
        int valor = fila->dado[fila->prox++];
        return valor;
    }

    cout << "Fila vazia." << endl;
    return -1;
}

int front(Fila* fila) {
    if (fila->prox <= fila->ant) {
        return fila->dado[fila->prox];
    }
    
    cout << "Fila vazia." << endl;
    return -1;
}

bool isEmpty(Fila* fila) {
    return fila->prox > fila->ant;
}

int main() {
    Fila fila;
    enfileirar(&fila);

    enqueue(&fila, 10);
    enqueue(&fila, 20);
    enqueue(&fila, 30);

    cout << "Primeiro elemento: " << front(&fila) << endl;
    cout << "Removendo elemento: " << dequeue(&fila) << endl;
    cout << "Primeiro elemento após dequeue: " << front(&fila) << endl;

    if (isEmpty(&fila)) {
        cout << "A fila está vazia." << endl;
    }
    
    else {
        cout << "A fila não está vazia." << endl;
    }

    return 0;
}
