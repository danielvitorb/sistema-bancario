#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "cliente.h"

class ContaBancaria {
    private:
        int numero;
        double saldo;
        Cliente titular;
    
    public:
        ContaBancaria(int numero, Cliente titular);
        ContaBancaria(int numero, Cliente titular, double saldo);
        void setNumero(int numero);
        void setSaldo(double saldo);
        int getNumero();
        double getSaldo();
        void depositar(double valor);
        void sacar(double valor);
        void exibirSaldo();
        void exibirInformacoes();
        void transferir(double valor, ContaBancaria &destino);
        void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
};

#endif