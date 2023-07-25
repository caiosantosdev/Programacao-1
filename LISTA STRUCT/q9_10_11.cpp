#include<iostream>

using namespace std;
struct DADOS
{
    int data;
    int sexo;
    int peso;
    int idademae;
    int tipoparto;
};

int leitura(DADOS parto[]);


int main()
{   
    DADOS parto[2500];
    int numelem = leitura(parto);


}
int leitura(DADOS parto[])
{
    int ok = 1;
    int i = 0;
    int elementoslidos = 0;
    while(ok == 1)
    {
        cin >> parto[i].data;
        if(parto[i].data != 0)
        {
        cin >> parto[i].idademae;
        cin >> parto[i].peso;
        cin >> parto[i].sexo;
        cin >> parto[i].tipoparto;
        i++;
        elementoslidos++;
        }
        else{
        ok = 0;
        }
    }
    return elementoslidos;
}
void nascimentos(DADOS parto[], int numelem)
{
    int nasc[12];
    //inicio loop zera vetor
    for(int i = 0 ; i < 12 ; i++)
    {
        nasc[i] = 0;
    }
    //fim do loop zera vetor
    //inicio loop preencher quantidade de criancas nascidas nos meses
    for(int i = 0 ; i < 12 ; i++)
    {
        for(int j = 0 ; j < numelem ; i++)
        {
            int mes = (parto[i].data%10000)/100;
            if(mes == i)
            nasc[i]++;
        }
    }
    for(int i = 0 ; i< 12 ; i++)
    {
        cout << "No mes " << i << " tiveram " << nasc[i] << " nascimentos." << endl;
    }
}
float pesomedio(DADOS parto[], int numelem)
{
    float soma = 0;
    for(int i = 0 ; i < numelem ; i++)
    {
        soma+=parto[i].peso;
    }
    float media = soma / numelem;
    return media;
}