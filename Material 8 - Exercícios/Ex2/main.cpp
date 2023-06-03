#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void VisualizarLista(const list<string>& lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int tam;

    cout << "Entre com o número de funcionários: ";
    cin >> tam;


    list<string> lista;

    if(lista.empty()) cout << "A lista está vazia!" << endl << endl;

    for(int i = 0; i < tam; i++)
    {
        string nome;

        cout << "Insira o nome do funcionário: ";
        cin >> nome;

        lista.push_back(nome);
    }

    cout << endl;

    cout << "Elementos da lista: ";
    VisualizarLista(lista);

    cout << endl;


    lista.sort();

    cout << "Elementos da lista em ordem: ";
    VisualizarLista(lista);

    cout << endl;


    lista.reverse();

    cout << "Elementos da lista em ordem inversa: ";
    VisualizarLista(lista);

    cout << endl;


    cout << "O número de funcionários cadastrados é: " << lista.size();
    cout << endl;
}

void VisualizarLista(const list<string>& lista)
{
    list<string> :: const_iterator elemento;

    if(lista.empty()) cout << "A lista está vazia!" << endl << endl;
    else
    {
        elemento = lista.begin();
        do
        {
            cout << *elemento << " ";
            elemento++;
        }
        while(elemento != lista.end());
        cout << endl;
    }
}
