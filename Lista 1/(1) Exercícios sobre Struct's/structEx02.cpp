/*
Exercício 2 - Vetor de Structs

Crie um vetor de 5 elementos da struct Aluno, que contém:
• Nome (string de até 50 caracteres)
• Matrícula (inteiro)
• Nota (float)

Solicite ao usuário que insira os dados dos 5 alunos e depois exiba a média das
notas.
*/

#include <iostream>

using namespace std;

typedef struct {
    char nome[51];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[5];
    float somador=0, media;

    for (int i=0; i<5; i++) {
        cout << endl << "ALUNO " << i+1 << endl;

        cout << "Nome: ";
        cin >> alunos[i].nome;

        cout << "Matrícula: ";
        cin >> alunos[i].matricula;

        cout << "Nota: ";
        cin >> alunos[i].nota;

        somador = somador + alunos[i].nota;
    }

    media = somador / 5;

    cout << endl << "A média das 5 notas é " << media << ".";
    
    return 0;
}
