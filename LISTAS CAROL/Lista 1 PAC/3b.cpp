#include<iostream>
int difhora(int h1, int m1, int h2, int m2);

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    cout << "A diferenca em minutos entre os voos foi de: " << difhora( h1, m1, h2, m2) << " minutos" << endl;
}
int difhora(int h1, int m1, int h2, int m2)
{
    int minutos1, minutos2, difmin;
    minutos1 = (h1*60) + m1;
    minutos2 = (h2*60) + m2;
    difmin = minutos2 - minutos1;
    return difmin;
}