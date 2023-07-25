#include<iostream>
#include<math.h>
using namespace std;
struct PONTO
{
    float x,y;
};

void leitura(int qt , PONTO v[]);
void maxdist(int qt, PONTO v[]);

int main()
{
    int qt;
    cout << "Quantos pontos serao armazenados?" << endl;
    cin >> qt;
    PONTO v[qt];
    leitura(qt,v);
    maxdist(qt,v);
}
void leitura(int qt , PONTO v[])
{
    for (int i = 0; i < qt ; i++)
    {
        cout << "Qual o X do ponto " << i <<  " ?" << endl; 
        cin >> v[i].x;
        cout << "Qual o Y do ponto " << i <<  " ?" << endl;
        cin >> v[i].y;
    }
}
void maxdist(int qt, PONTO v[])
{
    int menor = 1000;
    int posmenor;
    int maior = 0;
    int posmaior;
    for(int i = 0 ; i < qt ; i++)
    {
        if( v[i].x + v[i].y <= menor)
        {
            menor = v[i].x + v[i].y;
            posmenor = i;
        }
        if( v[i].x + v[i].y >= maior)
        {
            maior = v[i].x + v[i].y;
            posmaior = i;
        }
    }
    cout << "{" << v[posmaior].x << "," << v[posmaior].y << "} e {" << v[posmenor].x << "," << v[posmenor].y << "} " << endl;
}




