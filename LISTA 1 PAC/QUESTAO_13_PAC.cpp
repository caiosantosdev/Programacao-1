#include<iostream>

#define PI 3.1415

float volume_caixa(float a, float b, float c);
float volume_cilindro(float h, float raio);
float diferenca (float a, float b, float h, float raio);

using namespace std;

int main()
{
    float a, b, h, raio;
    cout << "Quais sao as medidas da base?" << endl;
    cin >> a >> b;
    cout << "Qual eh a altura?" << endl;
    cin >> h;
    cout << "E qual eh o raio do cilindro dentro da caixa?" << endl;
    cin >> raio;
    cout << "O volume da caixa eh: " << volume_caixa(a,b,h) << endl;
    cout << "O volume do cilindro eh: " << volume_cilindro(h,raio) << endl;
    cout << "O volume da caixa sem o cilindro eh: " << diferenca(a,b,h,raio) << endl;
}
float volume_caixa(float a, float b, float h)
{
    float caixa = a*b*h;
    return caixa;
}
float volume_cilindro(float h, float raio)
{
    float cilindro = (raio*1.0*(PI*PI))*h;
    return cilindro;
}
float diferenca (float a, float b, float h, float raio)
{
    float diferenca = volume_caixa(a,b,h) - volume_cilindro(h,raio); 
    return diferenca;
}
