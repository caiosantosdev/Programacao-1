#include<iostream>

int validar(int data);

using namespace std;

int main()
{
    int data;
    cin >> data;
    validar(data);
}
int validar(int data)
{
    int ano, dia, mes;
    ano = data%10000;
    dia = data/1000000;
    mes = (data/10000)%100;

    if(dia >=32 || mes<1 || mes >12 || dia < 1 )
    {
        cout << "Data invalida." << endl;
    }
    else{
    if(mes == 2)
    {
        if(dia == 29)
        {
            if((ano%4==0)&&(ano%100!=0 || ano%400==0))
            {
                cout << "Data valida!" << endl;
            }
            else{
                cout << "Data invalida" << endl;
            }
        }
        else if(dia<=28)
        {
            cout<<"Data valida" << endl;
        }
        else if(dia > 29)
        {
            cout << "data invalida" << endl;
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia>30)
        {
            cout << "data invalida" << endl;
        }
        else if (dia >= 1 && dia <=30)
        {
             cout << "Data valida" << endl;
        }
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        cout << "Data valida" << endl;
    }
    }
    return 10;
}