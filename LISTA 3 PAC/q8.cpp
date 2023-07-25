#include<iostream>

using namespace std;

void arrayeraser(int notas[]);
void pegar_notas(int notas[]);
void escrever_notas(int notas[]);

int main()
{
    int notas[50];
    arrayeraser(notas);
    pegar_notas(notas);
    escrever_notas(notas);
}
void arrayeraser(int notas[])
{
    for(int i= 0; i<50 ; i++)
    {
        notas[i] = 0;
    }
}
void pegar_notas(int notas[])
{
    for(int i = 0; i < 50 ; i++)
    {
        cout << "Qual foi a sua nota, aluno " << i+1 << endl;
        cin >> notas[i];
    }
}
void escrever_notas(int notas[])
{
    for(int i = 0; i<=10 ; i++)
    {
        cout << "Notas " << i << " : ";  
        for(int j = 0; j < 50 ; j++)
        {
            if(notas[j]==i)
            cout << "*";
        }
        cout << endl;
    }
}