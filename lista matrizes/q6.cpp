#include<iostream>

using namespace std;

void totais(float precos[31][4], float vendas[31][4]);
void preencher(float precos[31][4], float vendas[31][4]);

int main()
{
    float precos[31][4];
    float vendas [31][4];
    preencher(precos, vendas);
    totais(precos, vendas);

}
void preencher(float precos[31][4], float vendas[31][4])
{
    for(int i = 0 ; i < 31 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cout << "Qual o preco das vendas no dia " << i << " ?" << endl;
            cin >> precos[i][j];
            cout << "Qual a quantidade de vendas do combustivel" << j << " no dia " << i << " ?" << endl;
            cin >> vendas[i][j];
        }
    }
}
// para cada tipo de combustivel, o valor total de vendas no mes de agosto
//Para cada dia do mês: o valor total das vendas de todos os tipos de combustível.
void totais(float precos[31][4], float vendas[31][4])
{
    float comb1 = 0;
    float comb2 = 0;
    float comb3 = 0;
    float comb4 = 0;
    for(int i = 0 ; i < 31 ; i++)
    {
        float totaldia = 0;
        for(int j = 0 ; j < 4 ; j++)
        {
            float totalcomb = 0;
            totalcomb = precos[i][j] * vendas[i][j];
            totaldia+=totalcomb;
        }
        cout << "Total de vendas de todos os tipos de combustivel no dia " << i << " foi de " << totaldia << " reais." << endl;
        comb1 = comb1 + (precos[i][0]*vendas[i][0]);
        comb2 = comb2 + (precos[i][1]*vendas[i][1]);
        comb3 = comb3 + (precos[i][2]*vendas[i][2]);
        comb4 = comb4 + (precos[i][3]*vendas[i][3]);
    }
    cout << "O total do combustivel 1 no mes de agosto foi de " << comb1 << " reais." << endl;
    cout << "O total do combustivel 2 no mes de agosto foi de " << comb2 << " reais." << endl;
    cout << "O total do combustivel 3 no mes de agosto foi de " << comb3 << " reais." << endl;
    cout << "O total do combustivel 4 no mes de agosto foi de " << comb4 << " reais." << endl;
}