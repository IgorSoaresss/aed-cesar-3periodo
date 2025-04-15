/*
    Exercícios sobre Listas (4 exercícios)

    Exercício 1 - Implementação de uma Lista Encadeada Simples

    Crie um programa que implemente uma lista encadeada simples com as
    seguintes operações:
    • Inserir um elemento no início.
    • Inserir um elemento no final.
    • Remover um elemento específico.
    • Exibir todos os elementos da lista.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int dado;
    No* prox;
} No;

No* inserirInicio(No* head, int valor) {
    No* novoNo = (No*)malloc(sizeof(No));

    novoNo->dado = valor;
    novoNo->prox = head;

    return novoNo;
}

No* inserirFinal(No* lista, int valor) {
    No* novoNo = (No*)malloc(sizeof(No));

    novoNo->dado = valor;
    novoNo->prox = NULL;

    if (!lista) return novoNo;

    No* temp = lista;

    while (temp->prox) {
        temp = temp->prox;
    }

    temp->prox = novoNo;

    return lista;
}

No* remover(No* lista, int valor) {
    if (lista->dado == valor) {
        No* temp = lista;
        lista = lista->prox;

        free(temp);
        return lista;
    }

    No* temp = lista;

    while (temp->prox) {
        if (temp->prox->dado == valor) {
            No* toDelete = temp->prox;
            temp->prox = temp->prox->prox;  // Remove o nó
            free(toDelete);  // Libera o nó removido
            return lista;
        }
        temp = temp->prox;
    }

    return lista;
}

void printLista(No* lista) {
    No* temp = lista;

    while (temp) {
        cout << temp->dado << " -> ";
        temp = temp->prox;
    }

    cout << "NULL" << endl;
}

int main() {
    No* lista = NULL;

    // exemplos

    lista = inserirInicio(lista, 40);
    lista = inserirInicio(lista, 50);
    lista = inserirInicio(lista, 70);

    lista = remover(lista, 50);

    printLista(lista);

    return 0;
}