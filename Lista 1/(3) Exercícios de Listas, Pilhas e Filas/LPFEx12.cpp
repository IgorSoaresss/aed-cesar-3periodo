/*
    Exercícios sobre Filas (4 exercícios)

    Exercício 12 - Inverter uma Fila Usando uma Pilha

    Implemente uma função que recebe uma fila e inverte sua ordem usando uma
    pilha como estrutura auxiliar.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 5

struct Fila {
    int dado[MAX];
    int frente, tras;
};

struct Pilha {
    int dado[MAX];
    int top;
};

void enfileirar(Fila* fila) {
    fila->frente = -1;
    fila->tras = -1;
}

void empilhar(Pilha* pilha) {
    pilha->top = -1;
}

bool filaVazia(Fila* fila) {
    return (fila->frente == -1);
}

bool filaCheia(Fila* fila) {
    return (fila->tras == MAX - 1);
}

bool pilhaVazia(Pilha* pilha) {
    return (pilha->top == -1);
}

bool pilhaCheia(Pilha* pilha) {
    return (pilha->top == MAX - 1);
}

void enqueue(Fila* fila, int valor) {
    if (filaCheia(fila)) {
        cout << "Sem vagas! esvazie a fila primeiro." << endl;
        return;
    }

    if (filaVazia(fila)) {
        fila->frente = 0;
    }

    fila->tras = (fila->tras + 1);
    fila->dado[fila->tras] = valor;
    cout << "Elemento " << valor << " inserido na fila." << endl;
}

int dequeue(Fila* fila) {
    if (filaVazia(fila)) {
        cout << "Fila vazia! Não há elementos para remover." << endl;
        return -1;
    }

    int removido = fila->dado[fila->frente];

    if (fila->frente == fila->tras) {
        fila->frente = fila->tras = -1;
    }
    
    else {
        fila->frente = (fila->frente + 1);
    }

    cout << "Elemento " << removido << " removido da fila." << endl;

    return removido;
}

void displayQueue(Fila* fila) {
    if (filaVazia(fila)) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "Elementos na fila: ";
    for (int i = fila->frente; i <= fila->tras; i++) {
        cout << fila->dado[i] << " ";
    }
    cout << endl;
}

void push(struct Pilha* pilha, int valor) {
    if (pilhaCheia(pilha)) {
        cout << "Pilha cheia!" << endl;
        return;
    }

    pilha->dado[++pilha->top] = valor;
}

int pop(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        cout << "Pilha vazia! Não há elementos para remover." << endl;
        return -1;
    }

    return pilha->dado[pilha->top--];
}

void reverseQueue(Fila* fila) {
    Pilha pilha;
    empilhar(&pilha);

    while (!filaVazia(fila)) {
        push(&pilha, dequeue(fila));
    }

    while (!pilhaVazia(&pilha)) {
        enqueue(fila, pop(&pilha));
    }

    cout << "Fila invertida com sucesso." << endl;
}

int main() {
    struct Fila fila;
    enfileirar(&fila);

    enqueue(&fila, 10);
    enqueue(&fila, 20);
    enqueue(&fila, 30);
    enqueue(&fila, 40);
    enqueue(&fila, 50);
    displayQueue(&fila);

    reverseQueue(&fila);
    displayQueue(&fila);

    return 0;
}
