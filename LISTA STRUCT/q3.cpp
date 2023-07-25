#include<iostream>
#include<math.h>
using namespace std;


struct PONTO{
    float x;
    float y;
};
int pontoEq(PONTO p, PONTO q);
float PontoDist(PONTO p, PONTO q);
int main()
{
    PONTO p;
    PONTO q;
    cin >> p.x;
    cin >> p.y;
    cin >> q.x;
    cin >> q.y;
    cout << pontoEq(p,q) << endl;
}
int pontoEq(PONTO p, PONTO q)
{
    float distancia = PontoDist(p,q);
    if(distancia < 0.00001)
    {
    return 1;
    }
    return 0;
    
}
float PontoDist(PONTO p, PONTO q)
{
    float difx = p.x - q.x;
    float dify = p.y - q.y;
    float distancia = sqrt((pow(difx,2)+pow(dify,2)));
    return distancia;
}