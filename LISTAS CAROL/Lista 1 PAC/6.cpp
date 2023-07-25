#include<iostream>
int calculo(int auxiliocreche, int dependentes);
using namespace std;

int main()
{
  int auxiliocreche = 50, dependentes;
  cout << "Quantos dependentes de creche ha no brasil?" << endl;
  cin >> dependentes;
  cout << "Hoje o Governo destina " << calculo(auxiliocreche, dependentes) << " para o auxilio creche, que possui " << dependentes << " dependentes da bolsa federal." << endl;
}
int calculo(int auxiliocreche, int dependentes)
{
  int verbatotal;
  verbatotal = auxiliocreche * dependentes;
  return verbatotal;
}