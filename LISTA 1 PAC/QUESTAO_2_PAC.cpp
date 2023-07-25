//Faça uma função que receba como parâmetros a quantidade de alunos da turma e a quantidade de alunos 
//aprovados.
//A função deverá calcular e retornar o percentual de reprovados de uma turma.
#include<iostream>

using namespace std;
float percentual(int qalunos, int aprovados);
int main()
{
  int qalunos, aprovados;
  cout << "Quantos alunos tem na turma?" << endl;
  cin >> qalunos;
  cout << "Quantos alunos passaram da turma?" << endl;
  cin >> aprovados;
  cout << "o percentual de aproveitamento da turma eh de: " << percentual(qalunos, aprovados) << " % " << endl;
}
float percentual(int qalunos, int aprovados)
{
  float aproveitamento = ((aprovados*100.0)/qalunos);
  return aproveitamento;
}