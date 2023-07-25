#include<iostream>
void funcao(int dias);
using namespace std;

int main()
{   
    int dias;
    cin >> dias;
    funcao(dias);
    return 0;
}
void funcao(int dias)
{
    int semanas = dias / 7;
    int dia = dias % 7;
    cout << "Sao " << semanas << " semanas e " << dia << " dias." << endl;
}