#include <iostream>

using namespace std;

int main()
{
    /*
    1.Elabore um programa em C++ que solicite o peso e a altura de uma determinada pessoa Após a digitação, exibir se esta pessoa está ou não com seu peso ideal, conforme tabela abaixo:

    (IMC = peso / altura²)      MENSAGEM

    imc < 20                    Abaixo do peso

    20 > = imc < 25             Peso Ideal

    IMC > = 25                  Acima do Peso

    */


    //Start

    float altura;

    cout << "Insira sua altura: ";
    cin >> altura;


    int peso;

    cout << "Insira seu peso: ";
    cin >> peso;


    float imc = peso / (altura * altura);

    cout << imc << endl;


    if(imc >= 20 && imc < 25) cout << "Peso ideal";
    else if(imc < 20) cout << "Abaixo do peso";
    else if(imc >= 25) cout << "Acima do peso";
}
