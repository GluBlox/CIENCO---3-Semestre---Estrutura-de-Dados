#include <iostream>

using namespace std;

int main()
{
    /*
    4.Construa um programa em C++ que calcule o novo salário de um funcionário. Considere que o funcionário deverá receber um reajuste de 15 caso seu salário seja menor que 1000 Se o salário for maior ou igual a 1000 mas menor ou igual a 1500 o reajuste deve ser de 10 Caso o salário seja maior que 1500 o reajuste deve ser de 5.
    */

    //Start

    float salarioAtual;

    cout << "Insira o salário atual: ";
    cin >> salarioAtual;


    float reajuste, salarioNovo;

    if(salarioAtual < 1000)
    {
        reajuste = salarioAtual * 0.15;
        salarioNovo = salarioAtual + reajuste;

        cout << "O salário novo é " << salarioNovo << " com um reajuste de " << reajuste;
    }
    else if(salarioAtual >= 1000 && salarioAtual <= 1500)
    {
        reajuste = salarioAtual * 0.1;
        salarioNovo = salarioAtual + reajuste;

        cout << "O salário novo é " << salarioNovo << " com um reajuste de " << reajuste;
    }
    else if(salarioAtual > 1500)
    {
        reajuste = salarioAtual * 0.05;
        salarioNovo = salarioAtual + reajuste;

        cout << "O salário novo é " << salarioNovo << " com um reajuste de " << reajuste;
    }
}
