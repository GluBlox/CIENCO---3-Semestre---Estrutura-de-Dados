#include <iostream>
#include <queue>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    queue <string> fila;
    queue <string> filaAux;

    int opcao;
    string nome;

    do
    {
        cout << "O que deseja fazer?\n1. Inserir cliente\n2. Atender pr�ximo cliente\n3. Exibir fila\n4. Sa�r\nOp��o: ";
        cin >> opcao;

        if(opcao < 1 || opcao > 4) cout << "Op��o inv�lida!" << endl << endl;
        else
        {
            switch(opcao)
            {
                case 1:
                {
                    cout << "Insira o nome: ";
                    cin >> nome;

                    fila.push(nome);

                    cout << endl;

                    break;
                }

                case 2:
                {
                    cout << "Atendendo: " << fila.front() << endl;

                    fila.pop();

                    cout << endl;

                    break;
                }

                case 3:
                {
                    filaAux = fila;

                    cout << "As pessoas na fila s�o: ";

                    for(int i = 0; i < fila.size(); i++)
                    {
                        cout << filaAux.front() << " ";

                        filaAux.pop();
                    }

                    cout << endl << endl;

                    break;
                }
            }
        }
    }
    while(opcao != 4);
}
