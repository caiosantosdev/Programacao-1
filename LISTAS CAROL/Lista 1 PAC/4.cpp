#include<iostream>
int salario(int horatrab, int horas);
using namespace std;

int main()
{
    int horatrab, horas;
    cout << "Quanto voce ganha por hora?" << endl;
    cin >> horatrab;
    cout << "Quantas horas voce trabalhou essa semana?" << endl;
    cin >> horas;
    cout << "Voce ganharia " << salario(horatrab, horas) << " dolares esse mes se continuar assim!";
}
int salario(int horatrab, int horas)
{
    int salario;
    salario = (horatrab * horas)*4;
    return salario;
}