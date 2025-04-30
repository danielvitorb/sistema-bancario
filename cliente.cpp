#include "cliente.h"

Cliente::Cliente(){
    cpf = "";
    nome = "";
}

Cliente::Cliente(string nome, string cpf){
    this->cpf = cpf;
    this->nome = nome;
}

string Cliente::getNome(){
    return nome;
}

string Cliente::getCpf(){
    return cpf;
}