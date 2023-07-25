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
    int salario, i=1, soma=0;
    for(i=1;i<=quant;i++)
    {
        cout << "Qual eh o seu salario, funcionario " << i << "?" << endl;
        cin >> salario;
        soma = soma + salario;
    }
    cout << "A empresa gasta no ano com salarios o equivalente a " << soma*12 << " reais." << endl;
}