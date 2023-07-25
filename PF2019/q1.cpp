#include<iostream>

using namespace std;

void imprimir(int matriz[10][10]);
void gera(int matriz[10][10]);

int main()
{
    int matriz[10][10];
    gera(matriz);
    imprimir(matriz);
}

void gera(int matriz[10][10])
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(i<j)
            {
                matriz[i][j] = (2*i)+(7*j)-2;
            }
            else if( i == j )
            {
                matriz[i][j] = (3*(i*i)) - 1;
            }
            else
            {
                matriz[i][j] = (4*(i*i*i)) - (5*(j*j)) + 1;
            }  
        }
    }
}
void imprimir(int matriz[10][10])
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j  = 0 ; j < 10 ; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
