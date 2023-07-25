#include<iostream>

int mdc(int numero);

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
}
int mdc(int numero)
{
    int r = a % b;
    while(r!=0)
    {
        a=b;
        b=r;
        r = a%b;
    }
    return b;
}
