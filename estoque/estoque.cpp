#include <iostream>
#include <fstream>

using namespace std;

struct Produto
{
    int codigo;
    string descricao;
    int quantidade;
    int minimo;
    float preco;
};

struct Estoque {
    Produto produtos[1000];
    int qtdProdutos;
};

Estoque e;

void leEstoque()
{
    ifstream entrada;
    entrada.open("produtos.txt");

    entrada >> e.qtdProdutos;
    for(int i=0; i<e.qtdProdutos; i++)
    {
        entrada >> e.produtos[i].codigo;
        entrada >> e.produtos[i].descricao;
        entrada >> e.produtos[i].quantidade;
        entrada >> e.produtos[i].minimo;
        entrada >> e.produtos[i].preco;
    }

    entrada.close();
    cout << e.qtdProdutos << " produtos lidos do arquivo " << endl;
}

void imprimeProduto(Produto p) 
{
    cout << "Codigo:     " << p.codigo << endl;
    cout << "Descrição:  " << p.descricao << endl;
    cout << "Quantidade: " << p.quantidade << endl;
    cout << "Mínimo:     " << p.minimo << endl;;
    cout << "Preço:      " << p.preco << endl;
}

int buscaProduto(int codigo)
{
    for(int i=0; i<e.qtdProdutos; i++)
    {
        if(e.produtos[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

void registraVenda()
{
    int codigo, qtd;
    cout << "Entre com o codigo: ";
    cin >> codigo;
    int i = buscaProduto(codigo);
    if(i >= 0) {
        imprimeProduto(e.produtos[i]);
        cout << "Entre com a quantidade: ";
        cin >> qtd;
        e.produtos[i].quantidade -= qtd;
    }
    else {
        cout << "Produto não encontrado" << endl;
    }
}

void salvaEstoque()
{
    ofstream saida;
    saida.open("produtos.txt");
    saida << e.qtdProdutos << endl;
    for(int i=0; i<e.qtdProdutos; i++)
    {
        saida << e.produtos[i].codigo << " ";
        saida << e.produtos[i].descricao << " ";
        saida << e.produtos[i].quantidade << " ";
        saida << e.produtos[i].minimo << " ";
        saida << e.produtos[i].preco << endl;
    }
    saida.close();
}


void imprimeEstoque()
{
    for(int i=0; i<e.qtdProdutos; i++) {
        cout << "=======================================================" << endl;
        imprimeProduto(e.produtos[i]);
    }
    cout << "=======================================================" << endl;
}

void cadastraProduto()
{
    Produto p;
    cout << "Codigo:     ";
    cin >> p.codigo;
    cout << "Descrição:  ";
    cin >> p.descricao;
    cout << "Quantidade: ";
    cin >> p.quantidade;
    cout << "Minimo:      ";
    cin >> p.minimo;
    cout << "Preco:       ";
    cin >> p.preco; 
    e.produtos[e.qtdProdutos] = p;
    e.qtdProdutos++;
}

int main()
{
    int opcao;
    bool termina = false;
    e.qtdProdutos = 0;
    while(!termina) 
    {
        cout << "Escolha uma opção:" << endl;
        cout << "1 - Le Estoque" << endl;
        cout << "2 - Salva Estoque" << endl;
        cout << "3 - Imprime Estoque" << endl;
        cout << "4 - Cadastra Produto" << endl;
        cout << "5 - Registra Venda" << endl;
        cout << "0 - Sair do Programa" << endl;
        cin >> opcao;
        if(opcao == 1) {
            leEstoque();
        } else if(opcao == 2) {
            salvaEstoque();
        } else if(opcao == 3) {
            imprimeEstoque();
        } else if(opcao == 4) {
            cadastraProduto(); 
        } else if(opcao == 5) {
            registraVenda(); 
        } else if(opcao == 0) {
            termina = true;
        } else {
            cout << "Le direito!!! Opcao nao existe" << endl;
        }
    }
    return 0;
}
