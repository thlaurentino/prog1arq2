#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    fstream arquivo;
    string nomeArquivo = "arquivo.txt";
    string texto;

    arquivo.open(nomeArquivo, ios::out|ios::app|ios::in);

    while(getline(arquivo, texto))
    {
        cout << texto << endl;
    }

    arquivo.close();


    return 0;
}