#include <iostream>

using namespace std;

int main()
{
    /*
    3.Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras abaixo:

    a.A hora trabalhada vale a metade do sal�rio m�nimo

    b.O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada

    c.O imposto equivale a 3% do sal�rio bruto

    d.O sal�rio a receber equivale ao sal�rio bruto menos o imposto
    */


    //Start

    int horasTrabalhadas;

    cout << "Insira as horas trabalhadas: ";
    cin >> horasTrabalhadas;


    float salarioMinimo;

    cout << "Insira o sal�rio m�nimo: ";
    cin >> salarioMinimo;


    int valorHora = salarioMinimo / 2;

    int salarioBruto = valorHora * horasTrabalhadas;

    int salario = salarioBruto - (salarioBruto * 0.03);


    cout << "O sal�rio a ser recibido � de " << salario;
}
