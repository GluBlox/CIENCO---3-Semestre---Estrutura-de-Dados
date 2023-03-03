#include <iostream>

using namespace std;

int main()
{
    /*
    3.Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:

    a.A hora trabalhada vale a metade do salário mínimo

    b.O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada

    c.O imposto equivale a 3% do salário bruto

    d.O salário a receber equivale ao salário bruto menos o imposto
    */


    //Start

    int horasTrabalhadas;

    cout << "Insira as horas trabalhadas: ";
    cin >> horasTrabalhadas;


    float salarioMinimo;

    cout << "Insira o salário mínimo: ";
    cin >> salarioMinimo;


    int valorHora = salarioMinimo / 2;

    int salarioBruto = valorHora * horasTrabalhadas;

    int salario = salarioBruto - (salarioBruto * 0.03);


    cout << "O salário a ser recibido é de " << salario;
}
