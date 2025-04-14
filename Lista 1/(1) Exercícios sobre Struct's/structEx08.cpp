/*
Exercício 8 - Cálculo de Área e Perímetro

Crie uma struct chamada Retangulo, que contém:
• Base (float)
• Altura (float)

Crie funções para calcular a área e o perímetro do retângulo. No main(), permita
que o usuário insira os valores e exiba os cálculos.
*/

#include <iostream>

using namespace std;

typedef struct {
    float base;
    float altura;
} Retangulo;

float calcularArea(float base, float altura) {
    float area = base * altura;

    return area;
}

float calcularPerimetro(float base, float altura) {
    float perimetro = 2*base + 2*altura;

    return perimetro;
}

int main() {
    Retangulo retangulo;
    float area, perimetro;

    cout << endl << "CALCULADORA - ÁREA E PERÍMETRO" << endl;
    cout << "Informe os dados referentes ao retângulo:" << endl;

    cout << "Tamanho da base: ";
    cin >> retangulo.base;

    cout << "Tamanho da altura: ";
    cin >> retangulo.altura;

    area = calcularArea(retangulo.base, retangulo.altura);
    perimetro = calcularPerimetro(retangulo.base, retangulo.altura);

    cout << endl << "RESULTADOS" << endl;
    cout << "Área: " << area << ";" << endl;
    cout << "Perímetro: " << perimetro << "." << endl; 

    return 0;
}
