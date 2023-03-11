#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int n = 0;


    cout << "Digite o número para calcular: ";
    cin >> n;


    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

    cout << "Quadrado com lado " << n << ": " << areaQuadrado(n) << endl;

    cout << "Área retângulo " << areaRetangulo(n, n) << endl;
}
