#include<iostream>



using namespace std;
int soma(int n1, int n2, int n3);
int media(int n1, int n2, int n3);
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << "A soma eh: " << soma(n1, n2, n3) << " E a media eh aproximadamente: " << media(n1, n2, n3) << endl;
    return 0;

}
int soma(int n1, int n2, int n3)
{
    int calculo_soma = n1 + n2 + n3;
    return calculo_soma;
}
int media(int n1, int n2, int n3)
{
    float calculo_media = (n1 + n2 + n3)/3;
    return calculo_media;
}