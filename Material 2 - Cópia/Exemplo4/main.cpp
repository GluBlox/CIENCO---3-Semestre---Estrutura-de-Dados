#include <iostream>
#include <locale>

using namespace std;


void trocaValores(int & n1, int & n2);


int main()
{
    setlocale(LC_ALL, "Portuguese");


    int n1 = 0, n2 = 0;


    cout << "Insira o primeiro n�mero: ";
    cin >> n1;


    cout << "Insira o segundo n�mero: ";
    cin >> n2;


    cout << "Voc� inseriu " << n1 << endl;
    cout << "Voc� inseriu " << n2 << endl;


    trocaValores(n1, n2);

    cout << "Alterando o n�mero " << n1 << endl;
    cout << "Alterando o n�mero " << n2 << endl;
}


void alteraValores(int & n1, int & n2)
{
    n1 = 100;
    n2 = 200;
}
