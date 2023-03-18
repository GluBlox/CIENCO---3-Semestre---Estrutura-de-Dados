#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    1.Escreva um programa em C++ que permita a leitura dos nomes de 10 pessoas e armaze os nomes lidos em um vetor Após isto, o algoritmo deve permitir a leitura de mais 1 nome qualquer de pessoa e depois escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário
    */

    //Start

    string nome[10];


    for(int i = 0; i < 10; i++)
    {
        cout << "Entre com um nome: ";
        cin >> nome[i];
        cout << endl;
    }


    string buscaNome;
    string procuraNome = "ZZZ";


    cout << "Busque um nome: ";
    cin >> buscaNome;


    for(int i = 0; i < 10; i++)
    {
        if(buscaNome == nome[i])
        {
            procuraNome = nome[i];
        }
    }


    if(procuraNome != "ZZZ") cout << "ACHEI\n";
    else cout << "NÃO ACHEI\n";
}
