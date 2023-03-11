#include <iostream>

using namespace std;


int obtemValor();


int main()
{
    int a, b;


    a = obtemValor();
    b = obtemValor();


    cout << a << " + " << b << " = " << a + b << endl;
}


int obtemValor()
{
    int valor;


    cout << "Insira um valor: ";
    cin >> valor;


    return valor;
}
