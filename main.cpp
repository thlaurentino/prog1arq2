#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h> 

using namespace std;


int main()
{
    fstream arquivo;
    string nomeArquivo = "arquivo.txt";
    string texto;
    string token;
   // stringstream ss;

    arquivo.open(nomeArquivo, ios::out|ios::app|ios::in);

    arquivo << "Prof Natan" << endl;
    arquivo.seekg(0);
    while(getline(arquivo, texto))
    {
        stringstream ss(texto);
        while(getline(ss,token,' ')){
            cout << "Nome: " << token;

        }
       
    }

    arquivo.close();


    return 0;
}