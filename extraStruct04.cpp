/*
Exercício - Structs e Ponteiros

Crie uma struct chamada Carro, com os seguintes campos:
• Modelo (string de até 30 caracteres)
• Ano (inteiro)
• Preço (float)

No programa, declare um ponteiro para uma struct Carro e use malloc() para
alocar memória dinamicamente. Preencha os dados e exiba as informações antes
de liberar a memória com free().
*/

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

typedef struct {
    char modelo[31];
    int ano;
    float preco;
} Carro;

int main() {
    Carro* carro = (Carro*)malloc(sizeof(Carro));

    strcpy(carro->modelo, "Fusca");
    carro->ano = 1985;
    carro->preco = 15300.55;

    cout << endl << "INFORMAÇÕES DO CARRO" << endl;
    cout << "Modelo: " << carro->modelo << endl;
    cout << "Ano: " << carro->ano << endl;
    printf("Preço: %.2f\n", carro->preco);
    
    free(carro);

    return 0;
}
