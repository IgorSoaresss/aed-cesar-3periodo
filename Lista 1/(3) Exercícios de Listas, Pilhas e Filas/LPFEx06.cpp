/*
    Exercícios sobre Pilhas (4 exercícios)

    Exercício 6 - Verificar se uma Expressão com Parênteses Está Correta

    Crie uma função que recebe uma string contendo ( e ) e verifica se os
    parênteses estão balanceados.

    Exemplo:
    entrada: "(())()" → saída: Válido
    entrada: "(()" → saída: Inválido
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool verificarBalanceamento(const string& expressao) {
    stack<char> pilha;

    for (char ch : expressao) {
        if (ch == '(') {
            pilha.push(ch);  // Abre parênteses, empilhamos
        } else if (ch == ')') {
            if (pilha.empty()) {
                return false;  // Fecha parênteses sem correspondente
            }
            pilha.pop();  // Fecha parênteses, desempilhamos
        }
    }

    return pilha.empty();  // Se a pilha estiver vazia, os parênteses estão balanceados
}

int main() {
    string expressao;

    cout << "Digite a expressão -> ";
    cin >> expressao;

    if (verificarBalanceamento(expressao)) {
        cout << "É válido!" << endl;
    }
    
    else {
        cout << "Inválido." << endl;
    }

    return 0;
}
