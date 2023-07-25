#include<iostream>

float media(float v[], int qt);
void arraycleaner(float v[], int qt);

using namespace std;

int main()
{
    int qt;
    cout << "Qual a quantidade de numeros do vetor?" << endl;
    cin >> qt;
    float v[qt];
    arraycleaner(v, qt);
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
void arraycleaner(float v[], int qt)
{
    for(int i=0;i<qt;i++)
    {
        v[i] = 0;
    }
}
void acimamedia(float v[], int qt, float soma)
{
    int qtacima = 0;
    for(int i = 0; i<qt; i++)
    {
        if(v[i]>soma)
        qtacima+=1;
    }
    cout << "A quantidade de numeros acima da media eh: " << qtacima << endl;
}
int maioresqueultimo(float v[], int qt)
{
    int maiorqultimo = 0;
    for (int i=0;i<qt;i++)
    {
        if(v[i]>v[qt-1])
        maiorqultimo++;
    }
    return maiorqultimo;
}
int maior(float v[], int qt)
{
    int maior = 0;
    for(int i=0;i<qt;i++)
    {
        if(v[i]>maior)
        maior = v[i];
    }
    return maior;
}