#include<iostream>

void carlos(int turma);

using namespace std;

int main()
{
    int turma = 10;
    carlos(turma);

}
void carlos(int turma)
{
    int carlinhos[10], i=0, nota, soma = 0;
    float media;
    //limpar o vetor
    for(i=0;i<turma;i++)
    {
        carlinhos[i] = 0;
    }
    //pegar notas da turma
    for(i=0;i<turma;i++)
    {
        cout << "Qual a sua nota? aluno " << i+1 << " ?" <<  endl;
        cin >> nota;
        carlinhos[i] = nota;
        soma = carlinhos[i] + soma;
    }
    media = soma / 10.0;
    cout << "A media da turma eh: " << media << endl;
   
}



