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

void depositar(double valor){
    if (valor <= 0)
    {
        cout << "Não é possível depositar esse valor."
    }
}