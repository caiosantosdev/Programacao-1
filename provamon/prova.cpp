#include<iostream> // <stdio.h>

using namespace std;

struct DADOS{
    int matricula;
    float salario;
};


float mediafunc(DADOS funcionarios[2000], int qtd);
void maiorquemedia(DADOS funcionarios[2000],  int qtd, float mediafuncionarios);
void maiorsalario(DADOS funcionarios[2000], int qtd);

int main()
{
    DADOS funcionarios[2000];
    int qtd = 0;
    int ok = 1;
    int i = 0;
    while(ok == 1)
    {
        //printf("Qual a matricula do funcinario %d  ?", i);
        cout << "Qual a matricula do funcionario " << i+1 << " ? " << endl;
        //scanf(%d, funcionarios[i].matricula);
        cin >> funcionarios[i].matricula;
        if(funcionarios[i].matricula == 0)
        ok = 0;
        else
        {
            cout << "Qual o salario?" << endl;
            cin >> funcionarios[i].salario;
            i++;
            qtd++;
        }
    }

    float mediafuncionarios = mediafunc(funcionarios , qtd);
    
    cout << "A media do salario dos funcionarios da empresa eh de : " << mediafuncionarios << endl;
    
    maiorquemedia(funcionarios, qtd, mediafuncionarios);
    
    maiorsalario(funcionarios, qtd);

}

float mediafunc(DADOS funcionarios[2000], int qtd)
{
    float somatorio = 0;
    for(int i = 0 ; i < qtd ; i++)
    {
        somatorio = somatorio + funcionarios[i].salario;
    }
    float media = somatorio / qtd;
    return media;
}

void maiorquemedia(DADOS funcionarios[2000],  int qtd, float mediafuncionarios)
{
    cout << "Salarios maiores que a media: " << endl;
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario > mediafuncionarios)
        {
            cout << "Matricula: " << funcionarios[i].matricula << endl;
            cout << "Salario : " << funcionarios[i].salario << endl;
        }
    }
}

void maiorsalario(DADOS funcionarios[2000], int qtd)
{
    float maior = 0;
    //loop para achar o maior salario da empresa
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario > maior)
        {
            maior = funcionarios[i].salario;
        }
    }
    //imprimir a matricula dos funcionarios com esse maior salario
    cout << "Maior salario da empresa: " << maior << endl;
    cout << "Funcionario(s) com maior salario da empresa: " << endl;
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario == maior)
        cout << "Matricula: " << funcionarios[i].matricula << endl;
    }
}