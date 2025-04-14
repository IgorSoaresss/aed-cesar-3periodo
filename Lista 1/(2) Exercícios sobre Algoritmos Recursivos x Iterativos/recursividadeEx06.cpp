/*
    Exercícios de Recursividade

    Exercício 6 - Verificar se uma String é Palíndromo

    Implemente uma função recursiva que recebe uma string e retorna 1 se for um
    palíndromo e 0 caso contrário.

    Exemplo:
    • palindromo("arara") → 1
    • palindromo("casa") → 0
*/

#include <iostream>
#include <string.h>

using namespace std;

void inverter(char copia[], int inicio, int fim) {

    if (inicio >= fim) {
        return;
    }

    else {
        char temp = copia[inicio];
        copia[inicio] = copia[fim];
        copia[fim] = temp;

        inverter(copia, inicio + 1, fim - 1);
    }
}

bool palindromo(char palavra[]) {
    char copia[45];
    
    strcpy(copia, palavra);

    inverter(copia, 0, strlen(copia) - 1);

    if (strcmp(palavra, copia) == 0) {
        return 1;
    }

    else {
        return 0;
    }
}

int main() {
    char palavra[45];

    cout << endl << "VERIFICADOR DE PALÍNDROMOS" << endl;

    cout << "Digite uma palavra para ser verificada -> ";
    cin >> palavra;

    bool resposta = palindromo(palavra);

    if (resposta == 1) {
        cout << endl << resposta << " (é um palíndromo).";
    }

    else {
        cout << endl << resposta << " (não é um palíndromo).";
    }

    return 0;
}