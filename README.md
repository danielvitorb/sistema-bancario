# 🏦 Sistema Bancário Simples em C++

Este projeto é uma simulação de um sistema bancário simples implementado em C++, com foco em **POO (Programação Orientada a Objetos)**. Ele permite operações básicas como depósito, saque, transferência (inclusive para múltiplas contas), e exibição de informações de clientes e contas bancárias.

---

## 📁 Estrutura do Projeto

- `cliente.h` / `cliente.cpp`  
  Define e implementa a classe `Cliente`, contendo nome e CPF.

- `contabancaria.h` / `contabancaria.cpp`  
  Define e implementa a classe `ContaBancaria`, que representa uma conta com número, saldo e titular.

- `sistema.cpp`  
  Contém a função `main()`, que demonstra a criação de clientes e contas, e a execução de operações bancárias.

- `Makefile`  
  Script para facilitar a compilação do projeto.

---

## 🚧 Funcionalidades

### 👤 Classe `Cliente`
- **Atributos privados:**
  - `nome` (string)
  - `cpf` (string)
- **Métodos públicos:**
  - Construtor
  - Getters para nome e CPF

### 🏦 Classe `ContaBancaria`
- **Atributos privados:**
  - `numero` (int)
  - `saldo` (double)
  - `titular` (Cliente)
- **Métodos públicos:**
  - `depositar(double valor)`
  - `sacar(double valor)`
  - `transferir(double valor, ContaBancaria &destino)`
  - `transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2)` — *sobrecarga*
  - `exibirSaldo()`
  - `exibirInformacoes()`

---

## 🧠 Conceitos Utilizados

- Encapsulamento
- Construtores
- Sobrecarga de métodos
- Composição de objetos
- Verificações de erro (ex: saldo insuficiente)

---

## 🛠️ Compilação

Use o Makefile incluso:

```bash
make
