#include <iostream>
#include <locale>

using namespace std;


//Prot�tipo da fun��o
bool par(int num);
void mensagem();


int main()
{
    setlocale(LC_ALL, "Portuguese");


    int num = 0;


    mensagem();


    cout << "Insira um n�mero: ";
    cin >> num;


    if(par(num)) cout << "O n�mero " << num << " � par" << endl;
    else cout << "O n�mero " << num << " � �mpar" << endl;
}


bool par(int num)
{
    if(num % 2 == 0) return true;
    else return false;
}


void mensagem()
{
    cout << "Aula do Material 2" << endl;
    cout << endl;
}
