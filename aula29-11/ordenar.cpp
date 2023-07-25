#include<iostream>
void ordena(int v[], int qt);
int posicaomenor(int v[], int qt, int inicio);
using namespace std;

int main()
{
    int v[5] = {5,4,3,2,1}, qt = 5;


}
void ordena(int v[], int qt)
{
    int inicio = 0;
    for(inicio = 0; inicio<qt-1;inicio++)
    {
        int pos = posicaomenor(v,qt,inicio);
        int aux = v[pos];
        v[pos] = v[inicio];
        v[inicio] = aux;
    }
}
int posicaomenor(int v[], int qt, int inicio)
{
    int i = inicio;
    int pos = inicio;
    int menor = v[inicio];
    for(i=inicio;i<qt;i++)
    {
        if(v[i]<menor)
        {
            pos = i;
            menor = v[i];
        }
    }
    return pos;
}