#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
    private:
        string nome;
        string cpf;
    
    public:
        string getNome();
        string getCpf();
        Cliente();
        Cliente(string nome, string cpf);
};

#endif