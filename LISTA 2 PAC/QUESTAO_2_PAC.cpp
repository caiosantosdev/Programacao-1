#include<iostream>

void funcionarias(int quant);

using namespace std;

int main()
{
    int quant;
    cout << "Qual a quantidade de funcionarios da empresa? " << endl;
    cin >> quant;
    funcionarias(quant);

}
void funcionarias(int quant)
{
    int i = 0, matricula, sexo, salario, fem = 0;
    for(i=0;i<quant;i++)
    {
        cout << "qual a sua matricula?" << endl;
        cin >> matricula;
        cout << "qual o seu sexo? (1/2)" << endl;
        cin >> sexo;
        cout << "qual seu salario?" << endl;
        cin >> salario;
        if(sexo == 1)
        {
            fem = fem + 1;
        }
    }
    cout << "A quantidade de funcionarias eh: " << fem << endl;
}