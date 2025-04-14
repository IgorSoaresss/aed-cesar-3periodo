/*
    Exercício 10 - Sistema Bancário Simples

    Crie uma struct chamada ContaBancaria, contendo:
    • Nome do titular (string de até 50 caracteres)
    • Número da conta (inteiro)
    • Saldo (float)

    Crie funções para:
    • Depositar um valor na conta
    • Sacar um valor da conta (apenas se houver saldo suficiente)
    • Exibir o saldo

    No main(), crie uma conta bancária e permita que o usuário realize operações.
*/

#include <iostream>
#include <windows.h>

using namespace std;

typedef struct {
    char nomeTitular[50];
    int numConta;
    float saldo;
} ContaBancaria;

ContaBancaria conta;

float depositar(float deposito) {
    conta.saldo += deposito;

    Sleep(800);
    cout << "Depósito realizado!" << endl;
    Sleep(1200);

    return conta.saldo;
}

float sacar(float saque) {

    Sleep(800);

    if (saque > conta.saldo) {
        cout << "Operação inválida! O saque é maior que o saldo disponível" << endl;
    }

    else {
        conta.saldo -= saque;

        cout << "Saque realizado!" << endl;
    }

    Sleep(1200);

    return conta.saldo;
}

void exibirSaldo() {
    cout << endl << "Saldo atual: R$" << conta.saldo << "." << endl;
    system("pause");
}

int main() {
    int opcao;

    conta.saldo = 0;
    
    while (true) {
        cout << endl << "BANCO - MENU DE OPERAÇÕES" << endl;
        cout << "1. Depositar valor" << endl;
        cout << "2. Sacar valor" << endl;
        cout << "3. Ver saldo" << endl;
        cout << "0. Sair do sistema" << endl;
        
        cout << endl << "O que deseja fazer?" << endl;
        cout << "-> ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                float deposito;

                cout << endl << "Quanto deseja depositar?" << endl;
                cout << "-> ";
                cin >> deposito;

                conta.saldo = depositar(deposito);

                break;

            case 2:
                float saque;

                cout << endl << "Quanto deseja sacar?" << endl;
                cout << "-> ";
                cin >> saque;

                conta.saldo = sacar(saque);

                break;

            case 3:
                exibirSaldo();

                break;

            case 0:
                exit(0);

                break;
                
            default:
                cout << "Opção inválida! Tente novamente.";
        }
    }
    
    return 0;
}
