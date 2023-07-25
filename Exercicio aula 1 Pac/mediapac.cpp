#include<iostream>

using namespace std;

int main()
{
    float n1, n2, media, soma, pf, mediafinal;
    cout << "Qual foi a nota de p1?" << endl;
    cin >> n1;
    cout << "Qual foi a nota da p2?" << endl;
    cin >> n2;
    soma = n1 + n2;
    media = (n1 + n2)/2;
    cout << "Nota 1: " << n1 << endl;
    cout << "Nota 2: " << n2 << endl;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    if (media < 7 && media >= 3)
    {
        cout << "Qual foi a nota da prova final?" << endl;
        cin >> pf;
        mediafinal = (media + pf)/2;
        if (mediafinal >= 5)
            cout << "Situacao : Aprovado" << endl;
        else
            cout << "Situacao : Reprovado" << endl;
    }
    else if(media < 3)
    {
        cout << "Situacao: Reprovado" << endl;
    }
    else if(media > 7)
    {
        cout << "Situacao: Aprovado" << endl;
    }   
}