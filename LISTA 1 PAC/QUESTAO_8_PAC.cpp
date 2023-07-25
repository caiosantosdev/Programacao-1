#include<iostream>
int calculo_soma(int a, int b);
float calculo_media(int a, int b);
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << calculo_soma << endl << calculo_media << endl;
}
int calculo_soma(int a, int b)
{
    int calculo_soma = a+b;
    return calculo_soma;
}
float calculo_media(int a, int b)
{
    float media = calculo_soma(a,b)/2.0;
    return media;
}