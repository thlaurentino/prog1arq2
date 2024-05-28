#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct Dados {
    int id;
    string nome;
};

int main(){
fstream arquivo("dados.bin", ios::out | ios::binary);


if(arquivo.is_open()) {
    Dados dados = {1, "Exemplo"};
    arquivo.write((char*)&dados, sizeof(Dados));
    arquivo.close();
    } else {
    cerr << "Erro ao abrir o arquivo binário para escrita.\n";
    }
    arquivo.open("dados.bin", ios::in | ios::binary);
    {
        Dados dados;
        arquivo.read((char*)&dados, sizeof(Dados));
        cout << "ID: " << dados.id << endl;
        cout << "Nome: " << dados.nome << endl;
    }
    return 0;
}
