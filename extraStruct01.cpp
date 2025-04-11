/*
Exercício - Criando uma Estrutura Simples

Crie uma struct chamada Pessoa, que contém os seguintes campos:
• Nome (string de até 50 caracteres)
• Idade (inteiro)
• Altura (float)

No programa principal, declare uma variável do tipo Pessoa, preencha os dados
do usuário via teclado e exiba as informações.
*/

#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    char Nome[51];
    int Idade;
    float Altura;
} Pessoa;

int main() {
    Pessoa pessoa;

    strcpy(pessoa.Nome, "Igor");

    pessoa.Idade = 20;

    pessoa.Altura = 1.65;

    cout << pessoa.Nome << " tem " << pessoa.Idade << " anos e " << pessoa.Altura << "m de altura.";
    
    return 0;
}
