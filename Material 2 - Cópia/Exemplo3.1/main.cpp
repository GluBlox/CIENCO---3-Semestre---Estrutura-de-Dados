#include <iostream>
#include <locale>

using namespace std;


void trocaValores(int & n1, int & n2);


int main()
{
    setlocale(LC_ALL, "Portuguese");


    int n1, n2;


    cout << "Insira o primeiro n�mero: ";
    cin >> n1;


    cout << "Insira o segundo n�mero: ";
    cin >> n2;


    cout << "Voc� inseriu " << n1 << " e " << n2 << endl;


    trocaValores(n1, n2);

    cout << "Trocando os valores temos " << n1 << " e " << n2 << endl;
}


void trocaValores(int & n1, int & n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
