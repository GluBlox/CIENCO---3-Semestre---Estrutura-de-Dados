#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int n1, n2, temp;


    cout << "Insira o primeiro número: ";
    cin >> n1;


    cout << "Insira o segundo número: ";
    cin >> n2;


    cout << "Você inseriu " << n1 << " e " << n2 << endl;


    //Troca de valores


    temp = n1;
    n1 = n2;
    n2 = temp;


    cout << "Trocando os valores temos " << n1 << " e " << n2 << endl;
}
