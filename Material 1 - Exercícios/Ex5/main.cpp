#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    5.Construa um programa em C++ que calcule e apresente quanto deve ser pago por um produto considerando a leitura do preço de etiqueta (PE) e o código da condição de pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:

        Código da condição de pagamento         Condição de pagamento

        1                                       À vista em dinheiro ou cheque, com 10% de desconto

        2                                       À vista com cartão de crédito, com 5% de desconto

        3                                       Em 2 vezes, preço normal de etiqueta sem juros

        4                                       Em 3 vezes, preço de etiqueta com acrécimo de 10%
    */

    //Start

    float valor;

    cout << "Insira o valor do produto: R$";
    cin >> valor;


    int codigoPagamento;

    cout << "Entre com o código da condição de pagamento: ";
    cin >> codigoPagamento;

    float valorFinal;

    switch(codigoPagamento)
    {
        case 1:
            {
                cout << "\nÀ vista em dinheiro ou cheque, com 10% de desconto\n";

                valorFinal = valor - (valor * 0.1);

                cout << "\nNovo valor a ser pago é de R$" << valorFinal << endl;
                break;
            }

        case 2:
            {
                cout << "\nÀ vista com cartão de crédito, com 5% de desconto\n";

                valorFinal = valor - (valor * 0.05);

                cout << "\nNovo valor a ser pago é de R$" << valorFinal << endl;
                break;
            }

        case 3:
            {
                cout << "\nEm 2 vezes, preço normal de etiqueta sem juros\n";

                valorFinal = valor / 2;

                cout << "\nNovos valores a serem pagos são 2 vezes de R$" << valorFinal << endl;
                break;
            }

        case 4:
            {
                cout << "\nEm 3 vezes, preço de etiqueta com acrécimo de 10%\n";

                valorFinal = ((valor / 3) * 0.1) + (valor / 3);

                cout << "\nNovos valores a serem pagos são 3 vezes de R$" << valorFinal << endl;
                break;
            }

        default:
            {
                cout << "\nCódigo inexistente\n";
                break;
            }
    }
}
