#include <iostream>

using namespace std;

int main()
{
    /*
    4. Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20 n�meros lidos na ordem inversa
    */

    //Start

    int num[20];


    for(int i = 1; i <= 20; i++)
    {
        cout << "Insira um valor: ";
        cin >> num[i];
        cout << endl;
    }


    for(int i = 20; i > 0; i--)
    {
        cout << num[i] << endl;
    }
}
