#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void VisualizarLista(const list<int>& lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    list<int> lista;

    for(int i = 0; i < 5; i++)
    {
        int valor = 0;

        cout << "Insira um n�mero: ";
        cin >> valor;

        lista.push_back(valor);
    }

    cout << endl;

    cout << "Elementos da lista em ordem: ";
    VisualizarLista(lista);

    cout << endl;

    lista.reverse();

    cout << "Elementos da lista em ordem inversa: ";
    VisualizarLista(lista);

    lista.sort();
}

void VisualizarLista(const list<int>& lista)
{
    list<int> :: const_iterator elemento;

    if(lista.empty()) cout << "A lista est� vazia!" << endl << endl;
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
