#include<iostream>
using namespace std;

int main()
{
  int dias;
  cin >> dias;
  int semanas = dias/7;
  int diasdias = dias%7;
  cout << "O evento teve " << semanas << " semanas e " << diasdias << " dias" << endl;
}
