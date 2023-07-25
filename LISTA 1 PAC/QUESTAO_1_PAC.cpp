//1-Faça uma função que receba como parâmetros os seguintes dados de uma aluna: peso e altura. 
//Esta função deverá calcular e retornar o IMC desta aluna. IMC=PESO/(ALTURAXALTURA)
#include<iostream>
float calcular_imc(float peso, float altura);
using namespace std;

int main()
{
    float peso, altura;
    cin >> peso >> altura;
    cout << "O IMC eh: " << calcular_imc(peso, altura) << endl;
}
float calcular_imc(float peso, float altura)
{
    float imc = (peso*1.0)/(altura*altura);
    return imc;
}