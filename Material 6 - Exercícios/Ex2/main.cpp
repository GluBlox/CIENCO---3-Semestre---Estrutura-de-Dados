#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    stack <int> pilha;

    for(int i = 1; i < 11; i++)
    {
        cout << i << " ";

        pilha.push(i);
    }

    cout << endl << endl;

    cout << "Inverso: " << endl << endl;

    for(int i = 1; i < 11; i++)
    {
        cout << pilha.top() << " ";

        pilha.pop();
    }

    cout << endl;
}
