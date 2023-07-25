#include<iostream>
#include<math.h>

float gabriela(int x1, int y1, int x2, int y2);

using namespace std;

int main()
{
    int quant, i=0;
    float x1, y1, x2, y2;
    cin >> quant;
    for(i=0;i<quant;i++)
    {
    cout << "cite as coordenadas x1, y1, x2 ,y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "A distancia entre dois pontos eh: " << gabriela(x1,y1,x2,y2) << endl; 
    }

}
float gabriela(int x1, int y1, int x2, int y2)
{
    float distancia = sqrt((pow(x1-x2,2))+pow(y1-y2,2));
    return distancia;
}