#include<iostream>
int le_calcula_soma(int a, int b);
float calcula_media(int le_calcula_soma(int a, int b));
using namespace std;

int main()
{
    int a, b;
    //le_calcula_soma(a,b);
    calcula_media(a,b);

}

int le_calcula_soma(int a, int b)
{
    cin >> a >> b;
    int soma = a + b;
    return soma;
}

float calcula_media(int a, int b)
{
    float media = le_calcula_soma(a, b) / 2.0;
    return media;
}