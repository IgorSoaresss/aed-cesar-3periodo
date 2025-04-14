/*
    Exercício 9 - Registro de Pacientes

    Crie uma struct chamada Paciente, contendo:
    • Nome (string de até 50 caracteres)
    • Idade (inteiro)
    • Diagnóstico (string de até 100 caracteres)

    Crie uma função que recebe um vetor de Paciente e exibe todos os pacientes
    acima de 60 anos.
*/

#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    char nome[51];
    int idade;
    char diagnostico[101];
} Paciente;

void exibirIdosos(Paciente vPaciente[], int i, int total) {
    if (i >= total) return;

    if (vPaciente[i].idade > 60) {
        cout << vPaciente[i].nome << " | Idade: " << vPaciente[i].idade << " | Diagnóstico: " << vPaciente[i].diagnostico << endl;
    }

    i++;
    exibirIdosos(vPaciente, i, total);
}

int main() {
    Paciente vPaciente[100];

    // exemplos
    strcpy(vPaciente[0].nome, "josefino");
    vPaciente[0].idade = 75;
    strcpy(vPaciente[0].diagnostico, "H1N1");

    strcpy(vPaciente[1].nome, "josegrosso");
    vPaciente[1].idade = 57;
    strcpy(vPaciente[1].diagnostico, "tuberculose");

    strcpy(vPaciente[2].nome, "josemedio");
    vPaciente[2].idade = 61;
    strcpy(vPaciente[2].diagnostico, "COVID");

    cout << "PACIENTES ACIMA DE 60 ANOS: " << endl;
    exibirIdosos(vPaciente, 0, 3);

    return 0;
}
