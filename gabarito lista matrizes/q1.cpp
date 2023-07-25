#include <iostream>

#define ALUNOS 5
#define NOTAS 4

using namespace std;

void calculaMedias(float notas[ALUNOS][NOTAS]) 
{
    float soma;
    // Para cada aluno
    for(int i=0; i<ALUNOS; i++)
    {
        soma = 0;
        // Para cada nota do aluno
        for(int j=0; j<NOTAS; j++)
        {
            soma += notas[i][j];
        }
        cout << "A media do aluno " << (i+1) 
            << " é " << soma/NOTAS << endl;
    }
}

int main() {
    float notas[ALUNOS][NOTAS] = {
        {10, 7, 5, 8},
        {8, 9, 9, 7},
        {8, 9, 9, 7},
        {10, 10, 9, 9},
        {4, 5, 8, 9}
    };

    calculaMedias(notas);

    return 0;
}
