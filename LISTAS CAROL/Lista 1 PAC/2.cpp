#include<iostream>

using namespace std;

int main()
{
    int hora, minutos, total;
    cin >> hora >> minutos;
    total = (hora*60) + minutos;
    cout << "O total de minutos eh: " << total << endl;
}