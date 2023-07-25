#include<iostream>
int soma(int a, int b);
float media(int a, int b);
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "A soma eh: " << soma(a,b) << " E a media eh: " << media(a,b) << endl;
}
int soma(int a, int b)
{
    int soma = a + b;
    return soma;
}
float media(int a, int b)
{
    float media = soma(a,b)/2.0;
    return media;
}
