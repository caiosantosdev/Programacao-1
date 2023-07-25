#include<iostream>

void adcionar(Agenda agenda, TELEFONE newContact);
bool tryHandleInputOption (int opcao);
void zerar(TELEFONE lista[100]);
void imprimir(Agenda agenda);


using namespace std;

struct TELEFONE
{
    long long int numero;
    string nome;
};

struct Agenda{
    int qtdContatosSalvos;
    TELEFONE lista[100];
};

//FUNCAO DECISORIA
bool tryHandleInputOption (int opcao) 
{
    Agenda agenda;
    {
        if(opcao == 1)
        {
            cout << "Opcao 1" << endl;
            TELEFONE newContact = readContactFromCommandLine();
            adcionar(agenda,newContact);
        }
        else if(opcao == 2)
        {
            imprimir(agenda);
        }
        else if(opcao == 4)
            return false;
        else
            cout << "Opcao invalida" << endl;
    }
    return true;
}

int main()
{
    int loop = 1;
    int qtnumeros = 1;
    while(loop == 1)
    {
        int opcao;
        cout << "========= LISTA TELEFONICA =========" << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1 - Adcionar contato" << endl;
        cout << "2 - Imprimir lista" << endl;
        cout << "3 - Encontrar contato" << endl;
        cout << "4 - Sair" << endl;
    	cin >> opcao;
        bool canHandleOption = tryHandleInputOption(opcao);
    }
}
//FUNCAO QUE IMPRIME A AGENDA
void imprimir(Agenda agenda)
{
    int i=0;
    for(i=0;i<agenda.qtdContatosSalvos;i++)
    {
        cout << i << " - " << agenda.lista[i].nome << " --- " << agenda.lista[i].numero;
    }
}
//FUNCAO QUE ADCIONA UM CONTATO
void adcionar(Agenda agenda, TELEFONE newContact)
{
    agenda.lista[agenda.qtdContatosSalvos] = newContact;
    agenda.qtdContatosSalvos++;
}
//FUNCAO QUE ZERA O VETOR LISTA DE CONTATOS
void zerar(TELEFONE lista[100])
{
    int i = 0;
    for(i=0;i<100;i++)
    {
        lista[i] = {0};
    }
}
TELEFONE readContactFromCommandLine()
{
    TELEFONE contact;
    cin >> contact.nome;
    cin >> contact.numero;
    return contact;
}