/*
    Exercícios sobre Listas (4 exercícios)

    Exercício 4 - Reverter uma Lista Encadeada

    Implemente uma função que inverte a ordem dos elementos de uma lista
    encadeada sem criar uma nova lista.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int dado;
    No* prox;
} No;

No* inserir(No* head, int valor) {
    No* novoNo = (No*)malloc(sizeof(No));

    novoNo->dado = valor;
    novoNo->prox = NULL;

    if (head == NULL || head->dado >= valor) {
        novoNo->prox = head;
        return novoNo;
    }

    No* temp = head;

    while (temp->prox != NULL && temp->prox->dado < valor) {
        temp = temp->prox;
    }

    novoNo->prox = temp->prox;
    temp->prox = novoNo;

    return head;
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

    cout << endl;

    while (temp) {
        cout << temp->dado << " -> ";
        temp = temp->prox;
    }

    cout << "NULL" << endl;
}

int qtdElementos(No* lista) {
    No* temp = lista;
    int contador=0;

    while (temp) {
        contador++;
        temp = temp->prox;
    }

    return contador;
}

No* inverter(No* head) {
    No* ants = NULL;
    No* atual = head;
    No* dps = NULL;

    while (atual != NULL) {
        dps = atual->prox;
        atual->prox = ants;
        ants = atual;
        atual = dps;
    }

    return ants;
}

int main() {
    int qtd;
    No* lista = NULL;

    // exemplos

    lista = inserir(lista, 70);
    lista = inserir(lista, 95);
    lista = inserir(lista, 50);
    lista = inserir(lista, 40);

    lista = remover(lista, 50);

    printLista(lista);

    qtd = qtdElementos(lista);

    cout << "A lista tem "<< qtd << " elementos";

    lista = inverter(lista);

    printLista(lista);

    return 0;
}