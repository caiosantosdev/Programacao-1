#include<iostream>

int marinho(int quantperifericos);

using namespace std;

int main()
{
    int modelo, preco, quantperifericos,zeroperi=0 ,somatotal=0, vendas=0, a=1, somamarinho = 0;
    float media;
    while (a == 1)
    {
        cout << "CENTRAL DE VENDAS" << endl;
        cout << "Qual modelo voce planeja comprar?" << endl;
        cin >> modelo;
        cout << "Qual o preco do modelo?" << endl;
        cin >> preco;
        cout << "Quantos perifericos voce quer comprar?" << endl;
        cin >> quantperifericos;
        if(quantperifericos == 0)
        {
            zeroperi+=1;
            vendas+=1;
            cout << "O valor dessa compra foi de : " << preco << " reais." << endl;
            somatotal =  preco + somatotal;
        }
        else if(quantperifericos != 0)
        {
        vendas+=1;
        somamarinho = marinho(quantperifericos);
        somatotal = preco + somatotal + somamarinho;
        }
        media = somatotal*1.0 / vendas;
        cout << "Essa loja realizou " << zeroperi << " vendas com zero perifericos." << endl;
        cout << "A media de todas as vendas dessa loja eh de: " << media << endl;
    }
}
int marinho(int quantperifericos)
{
    int precoperiferico, i=0, soma=0;
    for(i=0;i<quantperifericos;i++)
    {
    cout << "Qual o valor do periferico " << i+1 << " ?" << endl;
    cin >> precoperiferico;
    soma = precoperiferico + soma;
    }
    return soma;
}