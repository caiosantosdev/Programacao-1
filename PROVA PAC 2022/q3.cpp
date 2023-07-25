#include<iostream>
int marinho(int data);


using namespace std;

int main()
{
    int data;
    cin >> data;
    //AAAAMMDD.
    marinho(data);

}
int marinho(int data)
{
    //meses com 31 dias - 1 3  5 7 8 10 12
    //meses com 30 dias -  4 6 9 11
    //fevereiro - 2
    int ano, dia, mes;
    ano = data/10000;
    mes = (data%10000)/100;
    dia = data%100;
    if(mes == 2)
    {
        if(dia == 29)
        {
            dia = 1;
            mes = 3;
        }
        else if(dia == 28)
        {
            if ((ano%4==0)&&(ano%100!=0||ano%400==0))
            {
                dia = 29;
            }
            else
            {
                dia = 1;
                mes = 3;
            }
        }
    }
    else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)
    {
        if(dia == 31)
        {
            dia = 1;
            mes +=1;
        }
        else{
            dia +=1;
        }
    }
    else if(mes == 12)
    {
        if(dia == 31)
        {
            ano +=1;
            dia = 1;
            mes = 1;
        }
        else{
            dia +=1;
        }
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia == 30)
        {
            dia = 1;
            mes+=1;
        }
        else{
            dia +=1;
        }
    }
    cout << "O dia seguinte eh: " << dia << "//" << mes << "//" << ano;
    return 10;
}