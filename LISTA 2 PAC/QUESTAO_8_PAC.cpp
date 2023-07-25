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
    int salario, i=1, maior=0, contagemmaior = 1;
    for(i=1;i<=quant;i++)
    {
        cout << "Qual eh o seu salario, funcionario " << i << "?" << endl;
        cin >> salario;
        if(salario>maior )
        {
        maior=salario;
        contagemmaior = 1;
        }
        else if(salario == maior)
        {
            contagemmaior+=1;
        }

    }
    cout << "O maior salario da empresa eh de " << maior << " reais." << endl;
    cout << contagemmaior << " Pessoa(s) recebem esse salario." << endl;
}