#include<iostream>
float media_final(int p1, int p2, int t1, int t2);

using namespace std;

int main()
{
    int matricula, p1, p2, t1, t2;
    cin >> matricula >> p1 >> p2 >> t1 >> t2;
    cout << "Matricula: " << matricula << endl << "Media final eh:" << media_final(p1, p2, t1, t2);
    return 0;
}
float media_final(int p1, int p2, int t1, int t2)
{
    float mf = (p1+p2+t1+t2)/4.0;
    return mf;
}