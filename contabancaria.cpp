#include "contabancaria.h"
#include <iostream>

// Construtor
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo){
    this->numero = numero;
    this->titular = titular;
    this->saldo = saldo;
}


// Métodos setters
void ContaBancaria::setNumero(int numero){
    this->numero = numero;
}

void ContaBancaria::setSaldo(double valor){
    saldo = valor;
}


// Métodos getters
int ContaBancaria::getNumero(){
    return numero;
}

double ContaBancaria::getSaldo(){
    return saldo;
}


// Métodos de operações a ser realizadas pelo titular da conta
void ContaBancaria::depositar(double valor){
    if (valor <= 0) // Checa se o valor a ser depositado é maior que 0
    {
        cout << "Não é possível depositar esse valor." << endl;
    } else {
        saldo += valor;
    }
}

void ContaBancaria::sacar(double valor){
    if (saldo < valor) // Checa se há saldo suficiente para sacar o valor desejado 
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        saldo -= valor;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (valor > saldo) // Checa se há saldo suficiente para efetuar a transferência
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        // Utilizando métodos para acessar e modificar atributos privados
        sacar(valor);
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << getNumero() << " para a conta " << destino.getNumero() << endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (valor > saldo) // Checa se há saldo suficiente para efetuar a transferência
    {
        cout << "Saldo insuficiente." << endl;
    } else {
        // Utilizando métodos para acessar e modificar atributos privados
        sacar(valor);
        destino1.depositar(valor / 2);
        destino2.depositar(valor / 2);
        cout << "Transferido: R$ " << valor / 2 << " para cada conta (" << destino1.getNumero() << " e " << destino2.getNumero() << ") da conta " << getNumero() << endl;
    }
}


// Métodos de exibição
void ContaBancaria::exibirSaldo(){
    cout << "Saldo atual da conta " << getNumero() << ": R$ "  << getSaldo() << endl;
    // Utilizando métodos para acessar atributos privados
}

void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getNome() <<  ", CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << getNumero() << ", Saldo: R$ " << getSaldo() << endl;
    // Utilizando métodos para acessar atributos privados
}