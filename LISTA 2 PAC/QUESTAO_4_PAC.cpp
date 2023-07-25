#include<iostream>
void funcionario(int quant);
using namespace std;

int main()
{
    int quant;
    cin >> quant;
    funcionario(quant);

}
void funcionario(int quant)
{
    int salario, i=1, maior=0;
    for(i=1;i<=quant;i++)
    {
        cout << "Qual eh o seu salario, funcionario " << i << "?" << endl;
        cin >> salario;
        if(salario>maior)
        maior=salario;
    }
    cout << "O maior salario da empresa eh de " << maior << " reais." << endl;
}