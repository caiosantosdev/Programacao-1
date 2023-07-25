#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,branco,nulo,totalvotos,totalvalidos;
    float totala, totalb, totalc, totald;

    cout << "Quantos votos o candidato A teve?";
    cin >>  a;
    cout << "Quantos votos o candidato B teve?";
    cin >>  b;
    cout << "Quantos votos o candidato C teve?";
    cin >>  c;
    cout << "Quantos votos o candidato D teve?";
    cin >>  d;
    cout << "Quantos votos brancos?";
    cin >>  branco;
    cout << "Quantos votos nulos?";
    cin >>  nulo;

    totalvotos = a + b + c + d + branco + nulo;
    totalvalidos = a + b + c + d;
    totala = (100.0*a)/totalvalidos;
    totalb = (100.0*b)/totalvalidos;
    totalc = (100.0*c)/totalvalidos;
    totald = (100.0*d)/totalvalidos;

    cout << "Votos para o candidato A: " << totala << endl;
    cout << "Votos para o candidato B: " << totalb << endl;
    cout << "Votos para o candidato C: " << totalc << endl;
    cout << "Votos para o candidato D: " << totald << endl;
    cout << "Votos em branco: " << branco << endl;
    cout << "Votos nulo: " << nulo << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Total de votos: " << totalvotos << endl;
    cout << "Total de votos validos: " << totalvalidos << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Candidato A obteve " << totala << "% dos votos validos" << endl;
    cout << "Candidato B obteve " << totalb << "% dos votos validos" << endl;
    cout << "Candidato C obteve " << totalc << "% dos votos validos" << endl;
    cout << "Candidato D obteve " << totald << "% dos votos validos" << endl;
    cout << "--------------------------------------------------" << endl;


}