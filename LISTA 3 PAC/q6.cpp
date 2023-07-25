#include<iostream>

int somavetor(int qt, int v1[], int v2[]);

using namespace std;

int main()
{
    int qt = 10;
    int v1[qt];
    int v2[qt];
}
int somavetor(int qt, int v1[], int v2[])
{
    int soma[qt];
    for(int i = 0;i<qt;i++)
    {
        soma[i] = v1[i] + v2[i];
    }
    return soma[qt];
}