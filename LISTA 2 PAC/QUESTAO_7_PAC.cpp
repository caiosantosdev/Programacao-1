#include<iostream>
void funcionario(int quant);
using namespace std;

int main()
{
    int quant;
    cin >> quant;
    funcionario(quant);
    return 0;
}
void funcionario(int quant)
{
    int salario, i=1, maior=0, matricula, matriculamaior;
    for(i=1;i<=quant;i++)
    {
        cout << "Qual eh o seu salario, funcionario " << i << "?" << endl;
        cin >> salario;
        cout << "Qual eh a sua matricula?" << endl;
        cin >> matricula;
        if(salario>maior)
        {
        maior=salario;
        matriculamaior = matricula;
        }
    }
    cout << "O funcionario de matricula: " << matriculamaior << endl;
    cout << "Eh o maior salario da empresa, com " << maior << " reais por mes." << endl;
}