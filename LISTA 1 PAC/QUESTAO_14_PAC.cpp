#include<iostream>
#include<math.h>
float distancia (float x1, float y1, float x2, float y2);

using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "A distancia entre esses dois pontos eh: " << distancia(x1,y1,x2,y2) << endl;
}
float distancia (float x1, float y1, float x2, float y2)
{
    float dist = sqrt(pow(x1-x2, 2) + pow(y1-y2,2));
    return dist;
}
