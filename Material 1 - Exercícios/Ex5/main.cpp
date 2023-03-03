#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    5.Construa um programa em C++ que calcule e apresente quanto deve ser pago por um produto considerando a leitura do pre�o de etiqueta (PE) e o c�digo da condi��o de pagamento (CP). Utilize para os c�lculos a tabela de condi��es de pagamento a seguir:

        C�digo da condi��o de pagamento         Condi��o de pagamento

        1                                       � vista em dinheiro ou cheque, com 10% de desconto

        2                                       � vista com cart�o de cr�dito, com 5% de desconto

        3                                       Em 2 vezes, pre�o normal de etiqueta sem juros

        4                                       Em 3 vezes, pre�o de etiqueta com acr�cimo de 10%
    */

    //Start

    float valor;

    cout << "Insira o valor do produto: R$";
    cin >> valor;


    int codigoPagamento;

    cout << "Entre com o c�digo da condi��o de pagamento: ";
    cin >> codigoPagamento;

    float valorFinal;

    switch(codigoPagamento)
    {
        case 1:
            {
                cout << "\n� vista em dinheiro ou cheque, com 10% de desconto\n";

                valorFinal = valor - (valor * 0.1);

                cout << "\nNovo valor a ser pago � de R$" << valorFinal << endl;
                break;
            }

        case 2:
            {
                cout << "\n� vista com cart�o de cr�dito, com 5% de desconto\n";

                valorFinal = valor - (valor * 0.05);

                cout << "\nNovo valor a ser pago � de R$" << valorFinal << endl;
                break;
            }

        case 3:
            {
                cout << "\nEm 2 vezes, pre�o normal de etiqueta sem juros\n";

                valorFinal = valor / 2;

                cout << "\nNovos valores a serem pagos s�o 2 vezes de R$" << valorFinal << endl;
                break;
            }

        case 4:
            {
                cout << "\nEm 3 vezes, pre�o de etiqueta com acr�cimo de 10%\n";

                valorFinal = ((valor / 3) * 0.1) + (valor / 3);

                cout << "\nNovos valores a serem pagos s�o 3 vezes de R$" << valorFinal << endl;
                break;
            }

        default:
            {
                cout << "\nC�digo inexistente\n";
                break;
            }
    }
}
