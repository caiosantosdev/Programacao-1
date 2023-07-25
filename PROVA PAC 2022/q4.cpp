#include<iostream>
int gabriela(int quant);
using namespace std;

int main()
{
    int quant, marinho;
    cin >> quant;
    marinho = gabriela(quant);
    cout << marinho << " reais." << endl;
    return 0;

}
int gabriela(int quant)
{
    int salario, matricula, maiorsalario = 0, i=0, quantmaior;
    for(i=0;i<quant;i++)
    {
        cin >> matricula >> salario;
        if(salario > maiorsalario)
        {
            maiorsalario = salario;
            quantmaior = 1;
        }
        else if( salario == maiorsalario)
        {
            quantmaior+=1;
        }
        else{

        }
    }
    cout << quantmaior <<  " pessoa(s) ganham o salario, que eh de: " << endl;
    return maiorsalario;
}