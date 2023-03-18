#include <iostream>
#include <locale>
#include <cstdlib>
#include <time.h>

#define ano 365

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    /*
    6. Faça um programa em C++ para ler e armazenar em um vetor a temperatura média de todos os dias do ano Calcular e escrever
    a) Menor temperatura do ano
    b) Maior temperatura do ano
    c) Temperatura média anual
    d) O número de dias no ano em que a temperatura foi inferior a média anual
    */

    //Start

    int temperatura[ano], menorTemp = 500, maiorTemp = 0, somaTemp = 0;


    for(int i = 0; i < ano; i++)
    {
        temperatura[i] = rand() % (38 - 12 + 1) + 12;


        if(maiorTemp < temperatura[i]) maiorTemp = temperatura[i];

        if(menorTemp > temperatura[i]) menorTemp = temperatura[i];


        somaTemp = somaTemp + temperatura[i];
    }


    int contador = 0, mediaTemp = somaTemp / ano;

    for(int i = 0; i < ano; i++)
    {
        if(temperatura[i] < mediaTemp) contador++;
    }


    cout << "\nA menor temperatura foi de " << menorTemp << endl;
    cout << "\nA maior temperatura foi de " << maiorTemp << endl;
    cout << "\nA média anual foi de " << mediaTemp << endl;
    cout << "\nA quantidade de vezes em que a temperatura ficou abaixo da média foi de " << contador << endl;
}
