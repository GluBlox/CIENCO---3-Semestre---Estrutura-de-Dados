#include <iostream>

using namespace std;

int main()
{
    /*
    4.Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio. Considere que o funcion�rio dever� receber um reajuste de 15 caso seu sal�rio seja menor que 1000 Se o sal�rio for maior ou igual a 1000 mas menor ou igual a 1500 o reajuste deve ser de 10 Caso o sal�rio seja maior que 1500 o reajuste deve ser de 5.
    */

    //Start

    float salarioAtual;

    cout << "Insira o sal�rio atual: ";
    cin >> salarioAtual;


    float reajuste, salarioNovo;

    if(salarioAtual < 1000)
    {
        reajuste = salarioAtual * 0.15;
        salarioNovo = salarioAtual + reajuste;

        cout << "O sal�rio novo � " << salarioNovo << " com um reajuste de " << reajuste;
    }
    else if(salarioAtual >= 1000 && salarioAtual <= 1500)
    {
        reajuste = salarioAtual * 0.1;
        salarioNovo = salarioAtual + reajuste;

        cout << "O sal�rio novo � " << salarioNovo << " com um reajuste de " << reajuste;
    }
    else if(salarioAtual > 1500)
    {
        reajuste = salarioAtual * 0.05;
        salarioNovo = salarioAtual + reajuste;

        cout << "O sal�rio novo � " << salarioNovo << " com um reajuste de " << reajuste;
    }
}
