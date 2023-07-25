#include<iostream>
int soma(int n1, int n2, int n3);
int media(int n1, int n2, int n3);

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << "A soma dos numeros eh: " << soma(n1, n2, n3) << " e a media eh: " << media(n1, n2, n3) << endl;
    return 0;
}
int soma(int n1, int n2, int n3)
{
    int calculosoma = n1 + n2 + n3;
    return calculosoma;
}
int media(int n1, int n2, int n3)
{
    int calculosoma = n1 + n2 + n2;
    int calculo_media = calculosoma / 3;
    return calculo_media;
}