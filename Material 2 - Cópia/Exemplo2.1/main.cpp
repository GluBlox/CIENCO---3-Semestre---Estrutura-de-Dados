#include <iostream>
#include <locale>

using namespace std;


int quadrado(int num);


int main()
{
    setlocale(LC_ALL, "Portuguese");


    /*
    Programa que verifica se tr�s valores podem ser os lados de um tri�ngulo reto
    */


    int l1, l2, l3;


    cout << "Insira tr�s valores: ";
    cin >> l1 >> l2 >> l3;


    if(l1 > 0 && l2 > 0 && l3 > 0 && (quadrado(l1) + quadrado(l2) == quadrado(l3) || quadrado(l2) + quadrado(l3) == quadrado(l1) || quadrado(l1) + quadrado(l3) == quadrado(l2)))
    {
        cout << " " << l1 << " " << l2 << " " << l3 << " podem formar um tri�ngluo reto\n";
    }
    else cout << " " << l1 << " " << l2 << " " << l3 << " n�o podem formar um tri�ngluo reto\n";
}


int quadrado(int num)
{
    return num * num;
}
