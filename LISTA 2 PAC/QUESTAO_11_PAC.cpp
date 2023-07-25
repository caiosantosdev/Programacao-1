#include<iostream>

int marinhoticket(int quanttickets);

using namespace std;

int main()
{
    int valor, formapg, dinheiro, troco, ticketzao;
    cout << "Qual eh o valor a ser pago na lanchonete?" << endl;
    cin >> valor;
    cout << "Qual a forma de pagamento?" << endl;
    cout << "1 - Cartao de debito" << endl;
    cout << "2 - Cartao de credito" << endl;
    cout << "3 - Dinheiro" << endl;
    cout << "4 - Ticket" << endl;
    cin >> formapg;
    if (formapg == 1 || formapg == 2)
    {
        cout << "Nao ha troco." << endl << "Pedido realizado com sucesso." << endl;
    }
    else if(formapg == 3)
    {
        cout << "Com quanto te dinheiro voce ira pagar?" << endl;
        cin >> dinheiro;
        troco = dinheiro - valor;
        cout << "Pagamento efetuado com sucesso." << endl << "Voce recebeu de troco " << troco << " reais." << endl;

    }
    else if(formapg==4)
    {
        int quanttickets;
        cout << "Com quantos tickets voce vai pagar?" << endl;
        cin >> quanttickets;
        ticketzao = marinhoticket(quanttickets);
        troco = ticketzao - valor;
        cout << "Pagamento efetuado com sucesso." << endl << "Voce recebeu de troco " << troco << " reais." << endl; 
    }
    troco = 0;
}
int marinhoticket(int quanttickets)
{
    int i=0, valorticket, somaticket = 0;
    for(i=0;i<quanttickets;i++)
    {
        cout << "qual o valor do ticket " << i+1 << " ?" << endl;
        cin >> valorticket;
        somaticket = somaticket + valorticket;
    }
    return somaticket;
}