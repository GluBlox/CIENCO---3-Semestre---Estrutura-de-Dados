#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    9.Fa�a um programa em C++ que leia dez conjuntos de dois valores, o primeiro representando o n�mero do aluno e o segundo a sua altura em cent�metros Encontre o aluno mais alto e o mais baixo Exiba o n�mero do aluno mais baixo o n�mero de aluno mais alto e as respectivas alturas
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


    cout << "O n�mero do aluno mais alto � " << numMaiorAltura << " e sua altura � " << maiorAltura << "cm.\n";

    cout << "O n�mero do aluno mais alto � " << numMenorAltura << " e sua altura � " << menorAltura << "cm.\n";
}
