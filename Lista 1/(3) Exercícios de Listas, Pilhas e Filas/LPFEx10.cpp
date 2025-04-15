/*
    Exercícios sobre Filas (4 exercícios)

    Exercício 10 - Fila Circular

    Implemente uma fila circular usando um vetor para evitar desperdício de
    espaço quando houver remoção de elementos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 5

typedef struct Fila {
    int dado[MAX];
    int frente, tras;
} Fila;

void enfileirar(Fila* fila) {
    fila->frente = -1;
    fila->tras = -1;
}

bool isVazia(Fila* fila) {
    return (fila->frente == -1);
}

bool isCheia(Fila* fila) {
    return (fila->frente == (fila->tras + 1) % MAX);
}

void enqueue(Fila* fila, int valor) {
    if (isCheia(fila)) {
        cout << "Fila cheia! Não foi possível concluir a ação." << endl;
        return;
    }

    if (isVazia(fila)) {
        fila->frente = 0;
    }

    fila->tras = (fila->tras + 1) % MAX;
    fila->dado[fila->tras] = valor;
    cout << "Elemento " << valor << " inserido na fila." << endl;
}

int dequeue(Fila* fila) {
    if (isVazia(fila)) {
        cout << "Fila vazia! Não foi possível concluir a ação" << endl;
        return -1;
    }

    int removido = fila->dado[fila->frente];
    
    if (fila->frente == fila->tras) {
        fila->frente = fila->tras = -1;
    }
    
    else {
        fila->frente = (fila->frente + 1) % MAX;
    }
    
    cout << "Elemento " << removido << " removido da fila." << endl;
    return removido;
}

void displayQueue(Fila* fila) {
    if (isVazia(fila)) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "Elementos na fila: ";

    int i = fila->frente;

    while (i != fila->tras) {
        cout << fila->dado[i] << " ";
        i = (i + 1) % MAX;
    }

    cout << fila->dado[fila->tras] << endl;
}

int main() {
    Fila* fila = (Fila*)malloc(sizeof(Fila));;
    enfileirar(fila);

    enqueue(fila, 10);
    enqueue(fila, 12);
    enqueue(fila, 4);
    displayQueue(fila);

    dequeue(fila);
    displayQueue(fila);

    enqueue(fila, 40);
    enqueue(fila, 32);
    enqueue(fila, 60);
    displayQueue(fila);

    return 0;
}
