#include "contabancaria.h"
#include <iostream>

ContaBancaria::ContaBancaria(int numero, Cliente titular){
    this->numero = numero;
    this->titular = titular;
    saldo = 0;
}

ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo){
    this->numero = numero;
    this->titular = titular;
    this->saldo = saldo;
}

int ContaBancaria::getNumero(){
    return numero;
}

double ContaBancaria::getSaldo(){
    return saldo;
}

void ContaBancaria::depositar(double valor){
    if (valor <= 0)
    {
        cout << "Não é possível depositar esse valor.";
    } else {
        saldo += valor;
    }
}

void ContaBancaria::sacar(double valor){
    if (saldo <= 0)
    {
        cout << "Não é possível sacar esse valor.";
    } else {
        saldo -= valor;
    }
}

void ContaBancaria::exibirSaldo(){
    cout << "Saldo atual da conta " << getNumero() << " : R$ "  << getSaldo() << endl;
}

void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getNome() <<  ", CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << getNumero() << ", Saldo: R$ " << getSaldo() << endl;
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (valor <= 0)
    {
        cout << "Não é possível transferir esse valor" << endl;
    } else {
        saldo -= valor;
        destino.depositar(valor);
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (valor <= 0)
    {
        cout << "Não é possível transferir esse valor" << endl;
    } else {
        saldo -= valor;
        destino1.depositar(valor / 2);
        destino2.depositar(valor / 2);
    }
}