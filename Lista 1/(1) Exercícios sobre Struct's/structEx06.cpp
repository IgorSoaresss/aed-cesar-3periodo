/*
    Exercício 6 - Cadastro de Livros

    Crie uma struct chamada Livro, que contenha:
    • Título (string de até 50 caracteres)
    • Autor (string de até 50 caracteres)
    • Ano de publicação (inteiro)

    Crie uma função que recebe um vetor de Livro e exibe os livros publicados após
    um determinado ano (definido pelo usuário).
*/

#include <iostream>

using namespace std;

typedef struct {
    char titulo[51];
    char autor[51];
    int anoPublic;
} Livros;

void livrosApos(int n, Livros livro[], int ano) {
    if (n<=0) return;

    if (livro[n].anoPublic <= ano) {
        n--;
        livrosApos(n, livro, ano);
    }
    
    else {
        cout << endl << livro[n].titulo << " - " << livro[n].autor << " - " << livro[n].anoPublic;
        n--;
        livrosApos(n, livro, ano);
    }
}

int main() {
    int n, ano;

    cout << "Quantos livros deseja cadastrar? -> ";
    cin >> n;

    Livros livro[n];

    for(int i=0; i<n; i++) {
        cout << endl << "LIVRO " << i+1 << endl;

        cout << "Título: ";
        cin >> livro[i].titulo;

        cout << "Autor: ";
        cin >> livro[i].autor;

        cout << "Ano de publicação: ";
        cin >> livro[i].anoPublic;
    }

    cout << endl << "LIVROS CADASTRADOS: ";

    for(int j=0; j<n; j++) {
        cout << endl << livro[j].titulo;
    }

    cout << endl << "Exibir livros após -> ";
    cin >> ano;

    livrosApos(n-1, livro, ano);

    return 0;
}
