#include "cliente.h"

string Cliente::getCpf(){
    return cpf;
}

string Cliente::getNome(){
    return nome;
}

Cliente::Cliente(string nome, string cpf){
    this->cpf = cpf;
    this->nome = nome;
}