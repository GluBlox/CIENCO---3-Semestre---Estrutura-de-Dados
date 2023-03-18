#include <iostream>

using namespace std;

int main()
{
    /*
    4. Faça um programa em C++ para ler 20 números e armazenar em um vetor Após a leitura total dos 20 números, o algoritmo deve escrever esses 20 números lidos na ordem inversa
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
