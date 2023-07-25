#include<iostream>

int verificarprimo(int numero);

using namespace std;

int main()
{
    int numero;
    cin >> numero;
    verificarprimo(numero);
    return 0;
}
int verificarprimo(int numero)
{
    int r = 0, d = 1;
    while(d<=numero)
    {
        if(numero%d==0)
        r+=1;
        else{}
        d++;
    }
    if(r==2)
    {
        cout << "Eh primo." << endl;
    }
    else
    {
        cout << "Nao eh primo." << endl;
    }
    return 10;
}