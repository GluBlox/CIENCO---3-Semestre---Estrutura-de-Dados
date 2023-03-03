#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    9.Faça um programa em C++ que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo a sua altura em centímetros Encontre o aluno mais alto e o mais baixo Exiba o número do aluno mais baixo o número de aluno mais alto e as respectivas alturas
    */

    //Start

    int alturaAluno, numMaiorAltura, maiorAltura = 0, numMenorAltura, menorAltura = 500;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Insira a altura do aluno: ";
        cin >> alturaAluno;


        if(alturaAluno > maiorAltura)
        {
            maiorAltura = alturaAluno;
            numMaiorAltura = i;
        }


        if(alturaAluno < menorAltura)
        {
            menorAltura = alturaAluno;
            numMenorAltura = i;
        }
    }


    cout << "O número do aluno mais alto é " << numMaiorAltura << " e sua altura é " << maiorAltura << "cm.\n";

    cout << "O número do aluno mais alto é " << numMenorAltura << " e sua altura é " << menorAltura << "cm.\n";
}
