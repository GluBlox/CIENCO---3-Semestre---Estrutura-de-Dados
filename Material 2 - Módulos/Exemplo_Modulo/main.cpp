#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int n = 0;


    cout << "Digite o n�mero para calcular: ";
    cin >> n;


    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

    cout << "Quadrado com lado " << n << ": " << areaQuadrado(n) << endl;

    cout << "�rea ret�ngulo " << areaRetangulo(n, n) << endl;
}
