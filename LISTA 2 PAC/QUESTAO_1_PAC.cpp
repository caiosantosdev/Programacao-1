#include<iostream>

void tabuada(int N);

using namespace std;

int main()
{
    int N;
    cin >> N;
    tabuada(N);
}
void tabuada(int N)
{
    int x = 10, tabu = 1;
    while(x >= 1)
    {
        tabu = x*N;
        cout << x << "*" << N << " = " << tabu << endl;
        x-=1;
    }
}