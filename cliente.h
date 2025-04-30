#include <string>
using namespace std;

class Cliente {
    private:
        string nome;
        string cpf;
    
    public:
        string getNome();
        string getCpf();
        Cliente(string nome, string cpf);
};