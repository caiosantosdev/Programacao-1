#include<iostream>
int horariomin(int horas, int minutos);
using namespace std;

int main()
{
    int horas, minutos;
    cin >> horas >> minutos;
    cout << horariomin(horas, minutos);
    return 0;
}
int horariomin(int horas, int minutos)
{
    int minutosh = (horas*60) + minutos;
    return minutosh;
}

