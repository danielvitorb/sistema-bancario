#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "cliente.h"

class ContaBancaria {
    private:
        // Atributos privados
        int numero;
        double saldo;
        Cliente titular;
    
    public:
        // Construtor que inicializa o número, titular e, opcionalmente, o saldo (padrão zero).
        ContaBancaria(int numero, Cliente titular, double saldo = 0);

        // Métodos setters
        void setNumero(int numero);
        void setSaldo(double saldo);

        // Métodos getters
        int getNumero();
        double getSaldo();

        // Métodos de exibição
        void exibirSaldo();
        void exibirInformacoes();

        // Métodos de operações a ser realizadas pelo titular da conta
        void depositar(double valor);
        void sacar(double valor);
        void transferir(double valor, ContaBancaria &destino);
        void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
};

#endif