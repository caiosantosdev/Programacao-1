#include<iostream>

using namespace std;

struct ALUNO
{
    int matricula;
    string nome;
};

void escola(int qt,ALUNO aluno[100])
{
    int i = 0;
    for(i = 0;i<qt;i++)
    {
        cout << "Qual eh a matricula do aluno " << i+1 << " ? " << endl;
        cin >> aluno[i].matricula;
        cout << "Qual eh o nome do aluno " << i+1 << " ? " << endl;
        cin >> aluno[i].nome;
    }
}
int verificacao(string nomealuno, int qt, ALUNO aluno[100])
{
    int i = 0, verif = 0;
    for(i=0;i<qt;i++)
    {
        if(aluno[i].nome == nomealuno)
        {
            return 1;
            verif = 1;
        }
        else{}
    }
    if(verif == 0)
    return 0;
}

int main()
{
    int valor;
    ALUNO aluno[100];
    string nomealuno;
    int qt;
    cout << "Quantos alunos tem na turma?" << endl;
    cin >> qt;
    escola(qt, aluno);
    cin >> nomealuno;
    verificacao(nomealuno, qt, aluno);
    valor = verificacao(nomealuno, qt, aluno);
    if(valor == 1)
    cout << "Nome encontrado, aluno matriculado." << endl;
    else if(valor == 0)
    cout << "Nome nao encontrado, aluno nao matriculado" << endl;

}