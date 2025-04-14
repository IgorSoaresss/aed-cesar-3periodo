/*
Exercício 7 - Agenda de Contatos

Crie uma agenda telefônica usando structs, onde cada contato possui:
• Nome (string de até 50 caracteres)
• Telefone (string de até 15 caracteres)

O programa deve permitir adicionar contatos e buscar um contato pelo nome.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;

typedef struct Agenda {
    char nome[51];
    char telefone[16];
    Agenda* prox;
} Agenda;

Agenda* inserir(Agenda* lista, char nome[], char telefone[]) {
    Agenda* novoCtt = (Agenda*)malloc(sizeof(Agenda));

    strcpy(novoCtt->nome, nome);
    strcpy(novoCtt->telefone, telefone);
    novoCtt->prox = lista;

    return novoCtt;
}

void printLista(Agenda* lista) {
    Agenda* atual = lista;

    while (atual != NULL) {
        cout << "Nome: " << atual->nome << " | Telefone: " << atual->telefone << endl;
        atual = atual->prox;
    }
}

void buscar(Agenda* lista, char nome[]) {
    Agenda* atual = lista;
    bool encontrado = false;

    cout << "Buscando...";
    Sleep(1200);

    while (atual != NULL) {
        if (strcmp(nome, atual->nome) == 0) {
            cout << endl << "Nome: " << atual->nome << " | Telefone: " << atual->telefone << endl;
        
            encontrado = true;
        }

        atual = atual->prox;
    }

    if (!encontrado) {
        cout << "Contato não encontrado!";
    }

    else {
        system("pause");
    }
}

void liberarMemoria(Agenda* lista) {
    Agenda* atual = lista;

    while (atual != NULL) {
        Agenda* proximo = atual->prox;

        free(atual);

        atual = proximo;
    }
}

int main() {
    int opcao0;
    Agenda* lista = NULL;
    
    while (true) {
        cout << endl << "MENU DE OPERAÇÕES" << endl;
        cout << "1 - Adicionar um contato" << endl;
        cout << "2 - Buscar um contato" << endl;
        cout << "0 - Sair do sistema" << endl;
        cout << "O que deseja fazer? -> ";
        cin >> opcao0;

        switch (opcao0) {
            case 1:
                char nome[51];
                char telefone[16];

                cout << endl << "Nome: ";
                cin >> nome;

                cout << "Telefone: ";
                cin >> telefone;

                lista = inserir(lista, nome, telefone);

                cout << "Contato adicionado." << endl;
                cout << "Voltando..." << endl;
                Sleep(1200);

                break;

            case 2:
                char nomeBusca[51];

                cout << endl << "LISTA ATUAL:" << endl;
                printLista(lista);

                cout << endl << "Buscar: ";
                cin >> nomeBusca;

                buscar(lista, nomeBusca);

                break;

            case 0:
                liberarMemoria(lista);
                exit(0);
                break;

            default:
                cout << "Opção inválida! Tente novamente.";
        }
    }

    return 0;
}
