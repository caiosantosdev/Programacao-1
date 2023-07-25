#include<iostream>
#include<unistd.h>
#include<iomanip>


using namespace std;

int main()
{
    int escolha = 1, opcao, voto, tiao = 0, dacueba = 0, claudio = 0, votos = 0, branco = 0;
    float parcial69, parcial24, parcial10;
    while(escolha == 1)
    {
        cout << "URNA ELEITORAL" << endl << "QUAL A SUA OPCAO?" << endl << "1- VOTAR" << endl <<  "2- PARCIAL" << endl <<  "3- RESULTADO" << endl;
        cin >> opcao;
        if(opcao == 1)
        {
            cout << endl << endl << endl << endl << endl << endl << endl << "OPCOES DE VOTO:" << endl << "69 - Tiao do Gas" << endl 
            << "24 - Dacueba Ribeiro" << endl << "10 - Claudinho VP" << endl << "0- Branco ou Nulo" << endl;
            cin >> voto;
            if(voto == 69)
            {
            tiao+=1;
            votos+=1;
            }
            else if(voto == 24)
            {
            dacueba+=1;
            votos+=1;
            }
            else if(voto == 10)
            {
            claudio+=1;
            votos+=1;
            }
            else if(voto == 0)
            {
            branco+=1;
            }
            cout << "TRILILILIN" << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            cout << "VOTO COMPUTADO." << endl;
            
        }
        else if(opcao == 2)
        {
            parcial69 = (tiao*1.0/(votos-branco))*100;
            parcial24 = (dacueba*1.0/(votos-branco))*100;
            parcial10 = (claudio*1.0/(votos-branco))*100;
            cout << "PARCIAL ELEIÇÕES" << endl << "Tiao do Gas(PP) - " << parcial69 << " % dos votos validos." << endl;
            cout << "Dacueba Ribeiro(PMDB) - " << parcial24 << " % dos votos validos."<< endl;
            cout << "Claudio VP(RITA) - " << parcial10 << " % dos votos validos." << endl;
            cout << "VOTOS EM BRANCO: " << branco << " votos." << endl;
            cout << endl << "TOTAL DE VOTOS: " << votos << endl;
        }
        else if(opcao == 3)
        {
            parcial69 = (tiao*1.0/votos)*100;
            parcial24 = (dacueba*1.0/votos)*100;
            parcial10 = (claudio*1.0/votos)*100;
            cout << "RESULTADO DAS ELEICOES" << endl << "Tiao do Gas(PP) - " << parcial69 << " % dos votos validos." << endl;
            cout << "Dacueba Ribeiro(PMDB) - " << parcial24 << " % dos votos validos." << endl;
            cout << "Claudio VP(RITA) - " << parcial10 << " % dos votos validos." << endl;
            cout << "VOTOS EM BRANCO: " << branco << " votos." << endl;
            cout << "TOTAL DE VOTOS: " << votos << " de votos computados em todo o quarto do caio." << endl;
            if(parcial69 > parcial24 && parcial69 > parcial10)
            {
                cout << endl << endl << endl << endl << "TIAO EH O NOVO PRESIDENTE DO BRASIL." << endl;
            }
            if(parcial24 > parcial69 && parcial24 > parcial10)
            {
                cout << endl << endl << endl << endl << "DACUEBA EH O NOVO PRESIDENTE DO BRASIL." << endl;
            }
            if(parcial10 > parcial24 && parcial10 > parcial69)
            {
                cout << endl << endl << endl << endl << "CLAUDIO EH O  NOVO PRESIDENTE DO BRASIL." << endl;
            }
            escolha = 0;
            break;
        }
    }
    return 0;
}