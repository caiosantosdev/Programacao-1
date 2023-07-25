#include<iostream>

using namespace std;

struct PONTO { 
    float x;
    float y;
};
void mostraponto(PONTO p);
int main()
{
    PONTO p = { 10.0, 5.0 };
    mostraponto(p);
    return 0;
}

void mostraponto(PONTO p)
{
    cout << "X= " << p.x << ", Y= " << p.y << endl;
}