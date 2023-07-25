#include<iostream>
#define PRECO 10
void rodrigo(int quant);

using namespace std;

int main()
{
    int quant;
    cout << "Qual a quantidade de downloads que o usuario devera fazer?" << endl;
    cin >> quant;
    rodrigo(quant);
}
void rodrigo(int quant)
{
    int i = 0, tamanho, quant2 = 0, total = 0, totalpreco;
    for(i=0;i<quant;i++)
    {
        cout << "Qual o tamanho do download " << i+1 << " ? " << endl;
        cin >> tamanho;
        if(tamanho <= 2)
        {
            quant2+=1;
        }
        total = tamanho + total;
    }
    totalpreco = total * PRECO;
    cout << "Numero de downloads de ate 2 MBYTE: " << quant2 << endl;
    cout << "Tamanho total dos downloads do usuario: " << total << " MBYTE" <<  endl;
    cout << "Valor a ser pago pelo uso do site: R$ " << totalpreco << ",00" <<  endl;
}