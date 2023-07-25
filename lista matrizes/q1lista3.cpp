#include<iostream>

float media(float v[], int qt);
void arraycleaner(float v[]);

using namespace std;

int main()
{
    int qt;
    cout << "Qual a quantidade de numeros do vetor?" << endl;
    cin >> qt;
    float v[qt];
    arraycleaner(v);
    for(int i = 0; i<qt ; i++)
    {
        cout << "Qual o numero do espaco " << i+1 << " ?" << endl;
        cin >> v[i];
    }
    cout << " a media eh igual a " << media(v,qt) << endl;

    
}
float media(float v[], int qt)
{
    float soma = 0;
    for(int i = 0; i < qt ; i++)
    {
        soma+=v[i];
    }
    soma = soma*1.0 / qt;
    return soma;
}
void arraycleaner(float v[])
{
    for(int i=0;i<100;i++)
    {
        v[i] = 0;
    }
}