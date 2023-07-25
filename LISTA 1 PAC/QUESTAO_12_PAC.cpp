#include<iostream>
void caixa(int saque);
using namespace std;

int main()
{
    int saque;
    cin >> saque;
    caixa(saque);
}
void caixa(int saque)
{
    int cem = saque/100;
    saque = saque%100;
    int cinquenta = saque/50;
    saque = saque%50;
    int vinte = saque/20;
    saque = saque % 20;
    int dez = saque / 10;
    saque = saque % 10;
    int cinco = saque % 5;
    saque = saque % 5;
    int dois = saque / 2;
    saque = saque % 2;
    int um = saque / 1;
    cout << "A Maquina retornou: " << cem << " notas de 100" << endl;
    cout << "A Maquina retornou: " << cinquenta << " notas de 50" << endl;
    cout << "A Maquina retornou: " << vinte << " notas de 20"<< endl;
    cout << "A Maquina retornou: " << dez << " notas de 10"<< endl;
    cout << "A Maquina retornou: " << cinco << " notas de 5"<< endl;
    cout << "A Maquina retornou: " << dois << " notas de 2"<< endl;
    cout << "A Maquina retornou: " << um << " notas de 1"<< endl;
}
