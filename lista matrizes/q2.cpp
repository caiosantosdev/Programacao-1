#include<iostream>

int menor(int matriz[10][5]);

using namespace std;

int main()
{
    int matriz [10] [5] = {
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
        {2,5,67,8,43},
    };
    int mnumero = menor(matriz);
    cout << "O menor numero eh " << mnumero << endl;
}
int menor(int matriz[10][5])
{
    int menor = 100;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matriz[i][j] <= menor)
            menor = matriz[i][j];
        }
    }
    return menor;
}