#include <iostream>

using namespace std;

/*
    1. Crie uma estrutura chamada pessoa que seja capaz de armazenar o nome, o endereço, o CPF e a idade de 5 pessoas.
*/

typedef struct Local
{
    string estado;
    string cidade;
    string bairro;
    string rua;
    string numero;
}Local;

struct Pessoa
{
    string nome;
    Local endereco;
    string cpf;
    int idade;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Start

    Pessoa pessoas[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Insira o nome: ";
        getline(cin, pessoas[i].nome);

        cout << "Insira a idade: ";
        cin >> pessoas[i].idade;

        cin.ignore();

        cout << "Insira o CPF: ";
        getline(cin, pessoas[i].cpf);

        cout << "Insira o estado: ";
        getline(cin, pessoas[i].endereco.estado);

        cout << "Insira a cidade: ";
        getline(cin, pessoas[i].endereco.cidade);

        cout << "Insira o bairro: ";
        getline(cin, pessoas[i].endereco.bairro);

        cout << "Insira a rua: ";
        getline(cin, pessoas[i].endereco.rua);

        cout << "Insira o número: ";
        getline(cin, pessoas[i].endereco.numero);

        cout << endl << endl << endl;
    }


    int codigo;

    for(int i = 0; i < 1; i++)
    {
        cout << "Entre com o código da pessoa (1, 2, 3, 4 ou 5): ";
        cin >> codigo;

        if(codigo < 1 || codigo > 5) i--;
    }

    codigo = codigo - 1;

    cout << endl << endl;

    cout << pessoas[codigo].nome << endl;
    cout << pessoas[codigo].idade << endl;
    cout << pessoas[codigo].cpf << endl;
    cout << pessoas[codigo].endereco.estado << endl;
    cout << pessoas[codigo].endereco.cidade << endl;
    cout << pessoas[codigo].endereco.bairro << endl;
    cout << pessoas[codigo].endereco.rua << endl;
    cout << pessoas[codigo].endereco.numero << endl;
}
