#include<iostream>

int dados(int linhas);

using namespace std;

int main()
{
    int linhas;
    cin >> linhas;
    dados(linhas);
}
int dados(int linhas)
{
    int municipio, nascimento, gestacao, peso, i=0, gestacaorapida = 100, municipiorap;
    for(i=0;i<linhas;i++)
    {
        cin >> municipio >> nascimento >> gestacao >> peso;
        if(gestacao < gestacaorapida)
        {
            gestacaorapida = gestacao;
            municipiorap = municipio;
        }
    }
    cout << "a gestacao mais rapida foi feita em: " << gestacaorapida << " semanas e aconteceu no municipio de numero " << municipiorap << endl;
    return 10;
}