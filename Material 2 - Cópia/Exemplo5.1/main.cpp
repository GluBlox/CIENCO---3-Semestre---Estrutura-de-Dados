#include <iostream>
#include <locale>

using namespace std;


void mensagem();
void mensagem(int n);


int main()
{
    setlocale(LC_ALL, "Portuguese");


    mensagem();

    mensagem(10);
}


void mensagem()
{
    cout << "Exemplo de sobrecarga de função" << endl;
}


void mensagem(int n)
{
    cout << "Número: " << n << endl;
}
