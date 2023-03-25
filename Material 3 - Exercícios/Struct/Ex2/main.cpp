#include <iostream>

using namespace std;

/*
    2. Suponha que você está desenvolvendo um programa para armazenar informações sobre animais em um zoológico. Crie uma estrutura chamada Animal que deve armazenar as seguintes informações sobre cada animal:
        • Nome do animal (string)
        • Espécie do animal (string)
        • Idade do animal (int)
        • Peso do animal em kg (float)
    Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais, que deve ser um vetor de 10 elementos do tipo Animal. Por fim, crie um programa que pede ao usuário para digitar os dados de 10 animais e armazena esses dados em uma variável do tipo ListaAnimais. Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.
*/

typedef struct Animal
{
    string nome;
    string especie;
    int idade;
    float peso;
}ListaAnimais;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Start

    ListaAnimais animais[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Qual o nome do animal? ";
        getline(cin, animais[i].nome);

        cout << "Qual a espécie do animal? ";
        getline(cin, animais[i].especie);

        cout << "Qual a idade do animal? ";
        cin >> animais[i].idade;

        cin.ignore();

        cout << "Qual o peso do animal? ";
        cin >> animais[i].peso;

        cin.ignore();

        cout << endl << endl;
    }

    cout << endl << endl << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Nome: " << animais[i].nome << endl;

        cout << "Espécie: " << animais[i].especie << endl;

        cout << "Idade: " << animais[i].idade << endl;

        cout << "Peso: " << animais[i].peso << endl;

        cout << endl << endl;
    }
}
