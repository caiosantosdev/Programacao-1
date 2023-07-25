#include<iostream>

using namespace std;

struct DADOSCLIENTES
{
    int numeroconta;
    float saldo;
};

void exibe(DADOSCLIENTES cliente[], int qt, float media);

int main()
{
    int qt = 0;
    DADOSCLIENTES cliente[10573];
    float media = 0;
    float soma = 0;
    int ok = 1;
    int i = 0;
    while(ok != 0)
    {
        cout << "QUAL O NUMERO DA CONTA?" << endl;
        cin >> cliente[i].numeroconta;
        if(cliente[i].numeroconta == 0)
        {
        ok = 0;
        }
        else if(cliente[i].numeroconta!=0)
        {
        cout << "QUAL SEU SALDO? " << endl;
        cin >> cliente[i].saldo;
        qt++;
        soma+=cliente[i].saldo;
        media = (soma*1.0) / qt;
        i++;
        }
    }
    exibe(cliente, qt, media);
    return 0;
}

void exibe(DADOSCLIENTES cliente[], int qt, float media)
{
    int i=0;
    for(i = 0; i < qt ; i++)
    {
        cout << "NUMERO DA CONTA = " << cliente[i].numeroconta << endl;
        cout << "SALDO = " << cliente[i].saldo << endl;
        if(cliente[i].saldo < media)
        cout << "saldo eh menor que a media do banco " << endl;
        else if(cliente[i].saldo == media)
        cout << "saldo do cliente eh igual a media do banco" << endl;
        else if(cliente[i].saldo > media)
        cout << "saldo do cliente eh maior que a media do banco" << endl;
    }
}
int soma_qt(int qt)
{
    qt++;
    return qt;
}