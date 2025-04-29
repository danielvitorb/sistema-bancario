#include "cliente.h"

class ContaBancaria {
    private:
        int numero;
        double saldo;
        Cliente titular;
    
    public:
        void depositar(double valor);
        void sacar(double valor);
};