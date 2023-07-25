#include<iostream>

void media(int qt, float matriz [30] [4]);

using namespace std;

int main()
{
    float matriz [30][4] = {
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
        {10.0,6.5,7.5,7.5},
    };
    int qt = 30;
    media(qt,matriz);
}
void media(int qt, float matriz [30] [4])
{   
    float somaaluno=0;
    //repeticao para cada um dos alunos
    for(int i = 0; i<qt; i++)
    {
        //repeticao para media aluno individual
        for(int j=0;j<4;j++)
        {
            somaaluno = somaaluno + matriz[i][j];

        }
        somaaluno = somaaluno / 4;
        cout << "A media do aluno " << i+1 << " eh " << somaaluno << endl;
        somaaluno = 0; 
    }
}