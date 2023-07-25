#include <iostream>

using namespace std;

void vendasPorAno(int vendas[6][12], float precos[6])
{
    for(int ano=0; ano<6; ano++) 
    {
        int soma = 0;
        for(int mes=0; mes<12; mes++)
        {
            soma += vendas[ano][mes];
        }
        cout << soma * precos[ano] << endl;
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

    float preco[] = { 1000, 2000, 2500, 3500, 5000, 10000 };

    vendasPorAno(vendas, preco);
    return 0;
}