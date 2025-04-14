/*
    Exercício 5 - Registro de Funcionários

    Crie um programa que gerencie um pequeno sistema de funcionários. Cada
    funcionário deve ter:
    • Nome (string de até 50 caracteres)
    • Cargo (string de até 30 caracteres)
    • Salário (float)

    O programa deve permitir adicionar contatos e buscar um contato pelo nome.
*/

#include <iostream>

using namespace std;

typedef struct {
    char nome[51];
    char cargo[31];
    float salario;
} Func;

int main() {
    int n;
    
    cout << endl << "Quantos funcionários deseja cadastrar? -> ";
    cin >> n;

    Func funcionario[n];

    for (int i=0; i<n; i++) {
        cout << endl << "FUNCIONÁRIO " << i+1 << endl;

        cout << "Nome: ";
        cin >> funcionario[i].nome;

        cout << "Cargo: ";
        cin >> funcionario[i].cargo;

        cout << "Salário: ";
        cin >> funcionario[i].salario;
    }

    cout << endl << "FUNCIONÁRIOS CADASTRADOS:" << endl;

    for(int j=0; j<n-1; j++) {
        cout << j+1 << " - " << funcionario[j].nome << ";" << endl;
    }

    cout << n << " - " << funcionario[n-1].nome << "." << endl;

    return 0;
}
