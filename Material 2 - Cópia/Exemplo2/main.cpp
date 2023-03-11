#include <iostream>
#include <locale>

using namespace std;


//Protótipo da função
bool par(int num);
void mensagem();


int main()
{
    setlocale(LC_ALL, "Portuguese");


    int num = 0;


    mensagem();


    cout << "Insira um número: ";
    cin >> num;


    if(par(num)) cout << "O número " << num << " é par" << endl;
    else cout << "O número " << num << " é ímpar" << endl;
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
