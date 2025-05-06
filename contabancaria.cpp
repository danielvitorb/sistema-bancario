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

void ContaBancaria::setNumero(int numero){
    this->numero = numero;
}

void ContaBancaria::setSaldo(double valor){
    saldo = valor;
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
        cout << "Não é possível depositar esse valor." << endl;
    } else {
        saldo += valor;
        cout << "Depósito realizado!" << endl;
    }
}

void ContaBancaria::sacar(double valor){
    if (saldo < valor)
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        saldo -= valor;
        cout << "Saque realizado!" << endl;
    }
}

void ContaBancaria::exibirSaldo(){
    cout << "Saldo atual da conta " << getNumero() << ": R$ "  << getSaldo() << endl;
}

void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getNome() <<  ", CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << getNumero() << ", Saldo: R$ " << getSaldo() << endl;
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (valor > saldo)
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        saldo -= valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << getNumero() << " para a conta " << destino.getNumero() << endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (valor > saldo)
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        sacar(valor);
        destino1.depositar(valor / 2);
        destino2.depositar(valor / 2);
        cout << "Transferido: R$ " << valor / 2 << " para cada conta (" << destino1.getNumero() << " e " << destino2.getNumero() << ") da conta " << getNumero() << endl;
    }
}