#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    2. Escreva um programa em C++ que permita a leitura das notas de uma turma de 20 alunos Calcular a m�dia da turma e contar quantos alunos obtiveram nota acima desta m�dia calculada Escrever a m�dia da turma e o resultado da contagem
    */

    //Start

    float nota[20], somaNota = 0.0;


    for(int i = 0; i < 20; i++)
    {
        cout << "Entre com a nota: ";
        cin >> nota[i];
        cout << endl;


        somaNota = somaNota + nota[i];
    }


    float mediaNota = somaNota / 20;
    int contador = 0;


    for(int i = 0; i < 20; i++)
    {
        if(nota[i] > mediaNota) contador++;
    }


    cout << "M�dia da sala � igual � " << mediaNota << endl;
    cout << contador << " alunos conseguiram uma nota superior � m�dia\n";
}
