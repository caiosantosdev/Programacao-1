#include<iostream>
void funcionario(int quant);
using namespace std;

int main()
{
    int quant;
    cout << "Quantos funcionarios tem em cada departamento?" << endl;
    cin >> quant;
    funcionario(quant);

}
void funcionario(int quant)
{
    int salario, maior=0, soma=0, i=0, j=0, somatotal = 0;
    // LOOP DOS DEPARTAMENTOS, TAL QUE CADA DEPARTAMENTO EH EXPRESSO POR 'i'
    for(i=0;i<10;i++)
    {
        // MAIOR E SOMA DOS SALARIOS DE UM DEPARTAMENTO POR VEZ
        for(j=0;j<quant;j++)
        {
            cout << "Qual o salario do funcionario " << j+1 << "Do departamento " << i+1 << endl;
            cin >> salario;
            if(salario > maior)
            {
                maior = salario;
            }
            else{}
            soma = soma + salario;
        }
        cout << "O maior salario do departamento " << i+1 << " eh : " << maior << endl;
        cout << "A soma dos salarios do departmento " << i+1 << " eh : " << soma << endl;
        somatotal = soma + somatotal;
        soma = 0;
        maior = 0;
    }
    cout << "A SOMA TOTAL DA EMPRESA EH:" << somatotal << endl;
}