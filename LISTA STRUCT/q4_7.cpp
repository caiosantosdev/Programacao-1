#include<iostream>

using namespace std;

struct RETANGULO
{
    float x1, y1, x2, y2;
};
struct PONTO
{
    float x,y;
};

float retanguloArea(RETANGULO carlos);
float retanguloPerimetro(RETANGULO carlos);
int retanguloContem(RETANGULO carlos, PONTO rodrigo);

int main()
{
    RETANGULO carlos = { 0.0 , 0.0 , 10.0 , 10.0};
    PONTO rodrigo = { 1.0 , 11.0};
    cout << retanguloContem(carlos, rodrigo) << endl;
}

float retanguloArea(RETANGULO carlos)
{
    float base = carlos.x2-carlos.x1;
    float altura = carlos.y2-carlos.y1;
    float area = base * altura;
    return area;
}

float retanguloPerimetro(RETANGULO carlos)
{
    float base = carlos.x2 - carlos.x1;
    float altura = carlos.y2 - carlos.y1;
    float perimetro = (base*2) + (altura*2);
    return perimetro;
}

int retanguloContem(RETANGULO carlos, PONTO rodrigo)
{
    if(rodrigo.x <= carlos.x2 && rodrigo.x >= carlos.x1 && rodrigo.y <= carlos.y2 && rodrigo.y >= carlos.y1)
    {
        return 1;
    }
    return 0;
}
