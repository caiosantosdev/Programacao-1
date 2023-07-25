#include<iostream>

using namespace std;


void preencher(int gol[6][12], int preco[6]);
void valorAno(int gol [6][12], int preco[6]);
void cadames(int gol [6][12], int preco[6]);
void valorgeral(int gol[6][12] , int preco[6]);


int main()
{
    int gol[6][12];
    int preco[6];
    preencher(gol, preco);
    valorAno(gol, preco);

}

void preencher(int gol[6][12], int preco[6])
{
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j = 0 ; j < 12 ; j++)
        {
            cout << "Quantos gols foram vendidos no ano " << i << " do mes " << j << " ?" << endl;
            cin >> gol[i][j];
        }
        cout << "Qual era o preco do gol no ano " << i << " ?" << endl;
        cin >> preco[i];
    }
}

void valorAno(int gol [6][12], int preco[6])
{
    for(int i = 0 ; i < 6 ; i++)
    {
        float valor = 0;
        for(int j = 0 ; j < 12 ; j++)
        {
            valor+=gol[i][j];
        }
        valor = valor * preco[i];
        cout << "O valor total vendido no ano " << i << "foi de " << valor << " reais." << endl;
    }
}

void cadames(int gol [6][12], int preco[6])
{
    for(int j = 0 ; j < 12 ; j++)
    {
        int qt = 0;
        for(int i = 0 ; i < 6 ; i++)
        {
            qt+=gol[i][j];
        }
        cout << "A quantidade total vendida no mes " << j << " em todos os ano foi: " << qt << endl;
    }
}

void valorgeral(int gol[6][12] , int preco[6])
{
    int total = 0;

    for(int i = 0 ; i < 6 ; i++)
    {
        int ano = 0;
        for(int j = 0 ; j < 12 ; j++)
        {
            total+=gol[i][j];
        }
        ano*=preco[i];
        total+=ano;
    }
    cout << "O valor total das vendas do gol no periodo de 2010 ate 2015 foi: " << total << " reais." << endl;
}