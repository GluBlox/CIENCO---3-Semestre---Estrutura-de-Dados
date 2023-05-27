#include <iostream>
#include <queue>

using namespace std;

struct Conta
{
    string nome;
    double saldo;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    queue <Conta> fila;

    int opcao;
    string nome;
    Conta NovaConta;

    do
    {
        cout << "O que deseja fazer?\n1. Criar conta\n2. Atender próximo cliente\n3. Saír\nOpção: ";
        cin >> opcao;

        cout << endl;

        if(opcao < 1 || opcao > 3) cout << "Opção inválida!" << endl << endl;
        else
        {
            switch(opcao)
            {
                case 1:
                {
                    cout << "Insira o nome e o saldo: ";
                    cin >> NovaConta.nome;
                    cin >> NovaConta.saldo;

                    fila.push(NovaConta);

                    cout << endl;

                    break;
                }

                case 2:
                {
                    int opcao2;

                    if(fila.empty()) cout << "A fila está vazia" << endl << endl;
                    else
                    {
                        Conta NovaNovaConta = fila.front();

                        cout << "Atendendo: " << NovaNovaConta.nome << endl;
                        cout << "Saldo: " << NovaNovaConta.saldo << endl << endl;

                        cout << "Qual operação deseja visualizar?\n1. Depositar\n2. Sacar\n3. Consultar o saldo\nOpção: ";
                        cin >> opcao2;

                        double saldoAux;

                        switch(opcao2)
                        {
                            case 1:
                            {
                                cout << "Insira quanto irá depositar: R$";
                                cin >> saldoAux;

                                NovaNovaConta.saldo += saldoAux;

                                cout << "O novo saldo é de: R$" << NovaNovaConta.saldo << endl << endl;

                                break;
                            }

                            case 2:
                            {
                                cout << "Insira quanto irá sacar: R$";
                                cin >> saldoAux;

                                NovaNovaConta.saldo -= saldoAux;

                                cout << "O novo saldo é de: R$" << NovaNovaConta.saldo << endl << endl;

                                break;
                            }

                            case 3:
                            {
                                cout << "O saldo é de: R$" << NovaNovaConta.saldo << endl << endl;

                                break;
                            }
                        }

                        fila.pop();

                        cout << endl;
                    }

                    break;
                }
            }
        }
    }
    while(opcao != 3);
}
