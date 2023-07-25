#include<iostream>

using namespace std;

void comparaGabarito(char alunos[5][11], char gabarito[11], int resultado[5]);
void printResultado(int resultado[5]);


int main()
{
    char alunos[5][11] = { { 'd' , 'd' , 'd' , 'a' , 'b' , 'd' , 'b' , 'b' , 'a' , 'c' , '\0'} ,
                           { 'a' , 'b' , 'a' , 'b' , 'd' , 'b' , 'b' , 'c' , 'a' , 'b' , '\0'} , 
                           { 'd' , 'd' , 'd' , 'a' , 'd' , 'd' , 'b' , 'c' , 'a' , 'c' , '\0'} ,
                           { 'd' , 'd' , 'a' , 'a' , 'd' , 'd' , 'b' , 'b' , 'a' , 'b' , '\0'} ,
                           { 'd' , 'd' , 'd' , 'a' , 'b' , 'b' , 'b' , 'c' , 'a' , 'b' , '\0'} ,
    };

    char gabarito[11] = { 'a' , 'b' , 'a' , 'c' , 'd' , 'b' , 'b' , 'c' , 'a' , 'b' , '\0' };
    int resultado[5] = {0};

    comparaGabarito(alunos , gabarito , resultado);
    printResultado(resultado);
    
    return 0;
}

void comparaGabarito(char alunos[5][11], char gabarito[11], int resultado[5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 11 ; j++)
        {
            if(alunos[i][j] == gabarito[j])
            resultado[i]++;
        }
    }
}
void printResultado(int resultado[5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Aluno " << (i+1) << " acertou: " << resultado[i] << endl;
    }
}
