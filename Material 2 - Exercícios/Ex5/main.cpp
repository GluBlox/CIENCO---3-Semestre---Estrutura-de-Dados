#include <iostream>

using namespace std;

int main()
{
    /*
    5. Faça um programa em C++ para ler um valor N qualquer (que será o tamanho dos vetores) Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma
    */

    //Start

    int N;


    cout << "Entre com o valor de N: ";
    cin >> N;
    cout << endl;


    int A[N], B[N];


    for(int i = 0; i < N; i++)
    {
        cout << "Entre com um valor de A: ";
        cin >> A[i];
        cout << endl;
    }


    for(int i = 0; i < N; i++)
    {
        cout << "Entre com um valor de B: ";
        cin >> B[i];
        cout << endl;
    }


    int soma[N];


    for(int i = 0; i < N; i++)
    {
        soma[i] = A[i] + B[i];
        cout << A[i] << " + " << B[i] << " = " << soma[i] << endl;
    }
}
