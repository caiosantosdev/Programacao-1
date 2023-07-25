#include<iostream>
#include<math.h>
using namespace std;


struct PONTO{
    float x, y;
};

void pegaponto(PONTO p);
void PontoDist(PONTO p, PONTO q);



int main()
{
    PONTO p;
    PONTO q;
    cin >> p.x;
    cin >> p.y;
    cin >> q.x;
    cin >> q.y;
    PontoDist(p,q);
}
void PontoDist(PONTO p, PONTO q)
{
    float difx = p.x - q.x;
    float dify = p.y - q.y;
    float distancia = sqrt((pow(difx,2)+pow(dify,2)));
    cout << "A distancia entre os dois pontos eh: " << distancia << endl;
}