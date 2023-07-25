#include <iostream>

using namespace std;

void quantidadePorMes(int vendas[6][12])
{
    for(int mes=0; mes<12; mes++)
    {
        int soma = 0;
        for(int ano=0; ano<6; ano++) 
        {
            soma += vendas[ano][mes];
        }
        cout << soma << endl;
    }
}

int main()
{
    int vendas[6][12] {
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 },
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 },
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 },
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 },
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 },
        { 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 5 }
    };

    quantidadePorMes(vendas);
    return 0;
}