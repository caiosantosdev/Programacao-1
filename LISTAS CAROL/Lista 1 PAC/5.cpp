#include<iostream>

int bonus(int salariobase, int anos);

using namespace std;

int main()
{
  int salariobase, anos;
  cin >> salariobase >> anos;
  cout << "O bonus que ele recebeu em" << anos << "eh de " << bonus(salariobase, anos) << "reais" << endl;
}
int bonus(int salariobase, int anos)
{
  float bonusanos = (salariobase*(0.02*anos));
  return bonusanos;
}