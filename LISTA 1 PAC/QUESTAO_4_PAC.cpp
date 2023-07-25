//Faça um programa, utilizando a função abaixo, que leia a nota da primeira prova e a nota da segunda
//prova de um aluno, calcule e exiba a média ponderada.
//A primeira prova tem peso 2 e a segunda prova tem peso 4. Faça a seguinte função:
//a) calc_pond: recebe como parâmetros as duas notas, calcula e retorna a média ponderada.
#include<iostream>
float ponderada(int p1, int p2);
using namespace std;

int main()
{
    int p1, p2;
    cin >> p1 >> p2;
    cout << "a media ponderada das duas provas eh: " << ponderada(p1, p2) << endl;
}
float ponderada(int p1, int p2)
{
    float media = ((p1*2)+(p2*4))/6;
    return media;
}