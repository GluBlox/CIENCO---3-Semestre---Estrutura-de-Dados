#include <iostream>

using namespace std;

int main()
{
    /*
    3. Ler um vetor A de 10 n�meros Ap�s, ler mais um n�mero e guardar em uma vari�vel X Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X Logo ap�s, imprimir o vetor M
    */

    //Start

    int A[10];


    for(int i = 0; i < 10; i++)
    {
        cout << "Insira um valor: ";
        cin >> A[i];
        cout << endl;
    }


    int X;


    cout << "Insira o valor de X: ";
    cin >> X;
    cout << endl;


    int M[10];


    for(int i = 0; i < 10; i++)
    {
        M[i] = A[i] * X;
        cout << A[i] << " * " << X << " = " << M[i] << endl;
    }
}
