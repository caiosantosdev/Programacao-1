//QUESTAO 5 - VALOR TOTAL COM 10% DO GARÇOM
#include<iostream>
float total(int valor);
using namespace std;

int main()
{
    int valor;
    cin >> valor;
    cout << "O valor total da conta era: R$" << valor << endl << "Com os 10% inclusos, ficou: R$" << total(valor) << endl;
}
float total(int valor)
{
    float total = valor*1.0+(valor*0.1);
    return total;
}