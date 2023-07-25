//1- Faça um programa , utilizando a função abaixo ,para calcular e exibir a média aritmética de três 
//números inteiros que serão fornecidos pelo usuário. Faça a seguinte função:
//calcula_media: recebe como parâmetros 3 número inteiros, calcula e retorna a média aritmética dos números.
#include<iostream>
float media(int a, int b, int c);
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "a media desses tres numeros eh: " << media(a,b,c) << endl;
}
float media(int a, int b, int c)
{
    float media = (a+b+c)/3.0;
    return media;
}