#include<iostream>
int primo(int numero);
using namespace std;

int main()
{
    int i=0, numero , soma=0;
    //estrutura de repeticao para pegar o numero
    for(i=0;i<10;i++)
    {
        cin >> numero;
        primo(numero);
        if(primo(numero)==2)
        {
            soma+=numero;
        }
    }
    cout << "a soma de todos os numeros primos citados acima eh: " << soma << endl;
}
int primo(int numero)
{
    int d = 1, r = 0;
    for(d=1;d<=numero;d++)
    {
        if(numero%d==0)
        {
            r++;
        }
    }
    return r;
}