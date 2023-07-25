#include<iostream>

using namespace std;


struct DADOSCLIENTE
{
    int numeroconta;
    int saldo;
};

void leitura_de_conta(DADOSCLIENTE cliente[]);
void arraycleaner(DADOSCLIENTE cliente[], int qt);
bool escolha(int opcao, DADOSCLIENTE cliente[], int qt);
void exibir(DADOSCLIENTE cliente[], int qt);

int main()
{
    int opcao;
    int qt = 10573;
    DADOSCLIENTE cliente[qt];
    arraycleaner(cliente, qt);
    leitura_de_conta(cliente);
    while(true)
    {
        cout << "AGENCIA DO BANCO SANTOS" << endl;
        cout << "O QUE DESEJA FAZER? " << endl;
        cout << "1 - LER CONTA" << endl;
        cout << "2 - FECHAR APLICATIVO" << endl;
        cin >> opcao;
        escolha(opcao, cliente, qt);
    }
}

bool escolha(int opcao, DADOSCLIENTE cliente[], int qt)
{
        if(opcao == 1)
        {
        exibir(cliente, qt);
        }
        else if(opcao == 2)
        {
        return false;
        }
    return true;
}
void exibir(DADOSCLIENTE cliente[], int qt)
{
    int procura;
    cout << "INSIRA O NUMERO DE SUA CONTA" << endl;
    cin >> procura;
    for(int i = 0 ; i<qt ; i++)
    {
        if(cliente[i].numeroconta == procura)
        {
            cout << "NUMERO DA CONTA - " << cliente[i].numeroconta;
            cout << "SALDO - " << cliente[i].saldo;
        }
    }
}

void leitura_de_conta(DADOSCLIENTE cliente[])
{
    for (int i = 0; i<2 ; i++)
    {
        cout << "Qual o numero da sua conta?" << endl;
        cin >> cliente[i].numeroconta;
        cout << "Qual o saldo da sua conta?" << endl;
        cin >> cliente[i].saldo;
    }
}

void arraycleaner(DADOSCLIENTE cliente[], int qt)
{
   for(int i = 0 ; i<qt ; i++)
   {
    cliente[i].numeroconta = 0;
    cliente[i].saldo = 0;
   } 
}