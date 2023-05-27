#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    stack <int> pilha;

    int opcao;
    int elemento;

    do
    {
        cout << "O que deseja fazer?\n1. Inserir um elemento\n2. Remover o elemento do topo\n3. Verificar o elemento do topo\n4. Verificar se a pilha est� vazia\n5. Exibir o tamanho da pilha\n0. Sa�r\nOp��o: ";
        cin >> opcao;

        if(opcao < 0 || opcao > 5)
        {
            cout << "Op��o inv�lida!" << endl << endl;
        }
        else
        {
            switch(opcao)
            {
                case 1:
                {
                    cout << "Insira o elemento: ";
                    cin >> elemento;

                    pilha.push(elemento);

                    cout << endl;

                    break;
                }

                case 2:
                {
                    pilha.pop();

                    cout << endl << endl;

                    break;
                }

                case 3:
                {
                    if(pilha.empty()) cout << "N�o h� elemento no topo!" << endl << endl;
                    else cout << "Elemento do topo: " << pilha.top() << endl << endl;

                    break;
                }

                case 4:
                {
                    if(pilha.empty()) cout << "A pilha est� vazia!" << endl << endl;
                    else cout << "A pilha n�o est� vazia!" << endl << endl;

                    break;
                }

                case 5:
                {
                    cout << "Tamanho da pilha: " << pilha.size() << endl << endl;

                    break;
                }
            }
        }
    }
    while(opcao != 0);
}
