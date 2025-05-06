#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
    private:
        // Atributos privados
        string nome;
        string cpf;
    
    public:
        // Métodos getters
        string getNome();
        string getCpf();

        // Métodos setters
        void setNome(string nome);
        void setCpf(string cpf);

        // Construtores
        Cliente();
        Cliente(string nome, string cpf);
};

#endif