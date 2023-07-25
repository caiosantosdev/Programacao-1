#include<iostream>
int funcao(int qt, int numeros);
using namespace std;

int main()
{
    int numeros[10];
    int qt = 10;
    for(int i = 0; i<qt ; i++)
    {
        cin >> numeros[i];
    }
    int media = funcao(qt,numeros[10]);
    cout << "A media eh " << media << endl;
}
int funcao(int qt, int numeros[10])
{
    int soma = 0;
    for( int i=0;i<qt;i++)
    {
        soma = soma + numeros[i];
    }
    soma = (soma*1.0)/qt;
    return soma;
}