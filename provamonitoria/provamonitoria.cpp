#include<iostream>

using namespace std;

struct DADOS{
    int matricula;
    float salario;
};

float mediafunc(DADOS funcionarios[2000], int qtd);
void maiorquemedia(DADOS funcionarios[2000], int qtd, float mediafuncionarios);
void maiorsalario(DADOS funcionarios[2000] , int qtd);

int main()
{
    DADOS funcionarios[2000];
    int ok = 1;
    int i = 0;
    int qtd = 0;
    while(ok == 1)
    {
        cout << "Qual a matricula do funcionario?" << endl;
        cin >> funcionarios[i].matricula;

        if(funcionarios[i].matricula==0)
        ok = 0;
        else{
        cout << "Qual o salario do funcionario?" << endl;
        cin >> funcionarios[i].salario;
        i++;
        qtd++;
        }
    }
    float mediafuncionarios = mediafunc(funcionarios, qtd);
    cout << "A media eh: " << mediafuncionarios << endl;
    maiorquemedia(funcionarios, qtd, mediafuncionarios);
    maiorsalario(funcionarios, qtd);
}


//funcao que faz a media do salario dos funcionarios da empresa.
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

//funcao que descobre a matricula e o salario dos funcionarios cujo salario eh maior que a media salarial.
void maiorquemedia(DADOS funcionarios[2000], int qtd, float mediafuncionarios)
{
    cout << "Salarios acima da media: " << endl;
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario > mediafuncionarios)
        {
           cout <<  "matricula:  " << funcionarios[i].matricula;
           cout <<  "  salario : " << funcionarios[i].salario << endl;  
        }  
    }
}
//funcao que acha o(s) maior(es) salario(s) da empresa.
void maiorsalario(DADOS funcionarios[2000] , int qtd)
{
    float maior = 0;
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario > maior)
        maior = funcionarios[i].salario;
    }
    cout << "O(s) maior(es) salario(s) da empresa estao na(s) matricula(s) : " << endl;
    for(int i = 0 ; i < qtd ; i++)
    {
        if(funcionarios[i].salario == maior)
        cout << funcionarios[i].matricula << endl;
    }
}
