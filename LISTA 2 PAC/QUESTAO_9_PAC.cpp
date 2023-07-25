#include<iostream>

void gabriela(int quant);

using namespace std;

int main()
{
    int quant = 20;
    gabriela(quant); 
    return 0;
}
void gabriela(int quant)
//946282
{
    int escolha, i = 0, horas, salariohora, salario, quantservicos, valorservico;
    for(i=0;i<quant;i++)
    {
    cout << "Selecione no menu o seu tipo de salario!" << endl << "1 - Horista" << endl <<
     "2 - Contratado" << endl << "3- Prestador de servico" << endl;
    cin >> escolha;
    if (escolha == 1)
        {
        cout << "Quantas horas voce trabalhou?" << endl;
        cin >> horas;
        cout << "Quanto voce ganha por hora?" << endl;
        cin >> salariohora;
        salario = salariohora * horas;
        cout << "O salario do funcionario " << i+1 << " eh de " << salario << " reais." << endl;
        }
    else if(escolha == 2)
        {  
        cout << "Qual o seu salario?" << endl;
        cin >> salario;
        cout << "O salario do funcionario " << i+1 << " eh de " << salario << " reais." << endl;
        }
    else if(escolha == 3)
        {
            cout << "Quantos servicos voce fez esse mes?" << endl;
            cin >> quantservicos;
            cout << "Quanto voce cobra por servico?" << endl;
            cin >> valorservico;
            salario = quantservicos * valorservico;
            cout << "O salario do funcionario " << i+1 << " eh de " << salario << " reais." << endl;
        }
    }
}