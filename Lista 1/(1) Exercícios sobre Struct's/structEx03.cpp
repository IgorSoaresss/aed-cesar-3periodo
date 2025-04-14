/*
Exercício 3 - Structs e Funções

Crie uma struct chamada Produto, que contém:
• Nome do produto (string de até 30 caracteres)
• Código (inteiro)
• Preço (float)

Crie uma função que recebe um Produto como parâmetro e exibe seus dados
formatados. No main(), instancie um produto, peça ao usuário que insira seus
valores e chame a função para exibir os dados.
*/

#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char nome[31];
    int codigo;
    float preco;
} Produto;

void formatar(char nome[], int codigo, float preco) {
    cout << "Nome do produto: " << nome << endl;
    cout << "Código: " << codigo << endl;
    cout << "Preço: R$" << preco << ".";
}

int main() {
    Produto produto;

    cout << "Qual o nome do produto? -> ";
    cin >> produto.nome;
    
    cout << "Qual o código dele? -> ";
    cin >> produto.codigo;

    cout << "Por último, qual o preço dele? -> ";
    cin >> produto.preco;

    formatar(produto.nome, produto.codigo, produto.preco);
    
    return 0;
}
