#include<iostream>

using namespace std;

int main()
{   
    int i=0;
    int gabriela = 1;
    int lista[100];
    int opcao;
    int numero;
    //limpar o vetor.
    for(i=0;i<100;i++)
    {
        lista[i] = 0;
    }
    //loop da lista
    while(gabriela==1)
    {
        cout << "--LISTA TELEFONICA--" << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1- Adcionar contatos" << endl;
        cout << "2- Ver lista telefonica" << endl;
        cin >> opcao;
        if(opcao==1)
    {
        cout << "Qual o numero do contato?" << endl;
        cin >> numero;
        for(i=0;i<100;i++)
        {
            if(lista[i]==0)
            {
                lista[i] = numero;
                break;
            }
            else{

            }
            opcao = 0;
        }
    }
    else if(opcao == 2)
    {
        cout << "SEUS CONTATOS: " << endl;
        for(i=0;i<100;i++)
        {
            if(lista[i]!=0)
            {
                cout << "Contato " << i+1 << " - " << lista[i] << endl;
            }
            else{
                
            }
            opcao = 0;
        }
    }
    }
    
}
