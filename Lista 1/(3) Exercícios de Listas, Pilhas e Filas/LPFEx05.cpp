/*
    Exercícios sobre Pilhas (4 exercícios)

    Exercício 5 - Implementação de uma Pilha com Vetor

    Implemente uma pilha usando um vetor e forneça as seguintes operações:
    • push: inserir um elemento no topo.
    • pop: remover o elemento do topo.
    • top: exibir o elemento do topo.
    • isEmpty: verificar se a pilha está vazia.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX 100

typedef struct Pilha {
    int dado[MAX];
    int top;
} Pilha;

void empilhar(Pilha* pilha) {
    pilha->top = -1;
}

void push(Pilha* pilha, int dado) {
    if (pilha->top < MAX - 1) {
        pilha->dado[++(pilha->top)] = dado;
    }

    else {
        cout << "Pilha cheia!" << endl;
    }
}

int pop(Pilha* pilha) {
    if (pilha->top >= 0) {
        return pilha->dado[(pilha->top)--];
    }
    
    else {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
}

int top(Pilha* pilha) {
    if (pilha->top >= 0) {
        return pilha->dado[pilha->top];
    }
    
    else {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
}

bool isEmpty(Pilha* pilha) {
    return pilha->top == -1;
}

int main() {
    Pilha pilha;
    empilhar(&pilha);

    // exemplos;

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    cout << "Topo da pilha: " << top(&pilha) << endl;

    pop(&pilha);

    cout << "Novo topo da pilha após removeção do topo: " << top(&pilha) << endl;

    if (isEmpty(&pilha)) {
        cout << "A pilha está vazia!" << endl;
    }
    
    else {
        cout << "A pilha não está vazia!" << endl;
    }

    return 0;
}
