#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    10.Em um cinema, certo dia, cada espectador respondeu a um question�rio, que perguntava a sua idade (ID) e a opini�o em rela��o ao filme (OP) seguindo os seguintes crit�rios:

    Opini�o(OP)     Significado
         1             �timo
         2              Bom
         3            Regular
         4             Ruim

    Ao final da pesquisa ser� indicado quando a idade do usu�rio for informada como negativa (idade inexistente). Construa um programa em C++ que, lendo esses dados, calcule e apresente:

    A- Quantidade de pessoas que respondeu a pesquisa

    B- M�dia de idade das pessoas que responderam a pesquisa

    C- Porcentagem de cada uma das respostas
    */

    //Start

    int quantidadePessoas = 0, idade = 0, opiniao = 0, opOtimo = 0, opBom = 0, opRegular = 0, opRuim = 0;
    float auxIdade = 0;


    for(int i = 1; i <= 10; i++)
    {
        cout << "Insira sua idade: ";
        cin >> idade;

        auxIdade = idade + auxIdade;


        cout << "Insira sua opini�o(1-�timo / 2-Bom / 3-Regular / 4-Ruim): ";
        cin >> opiniao;


        switch(opiniao)
        {
            case 1:
            {
                opOtimo++;
                break;
            }

            case 2:
            {
                opBom++;
                break;
            }

            case 3:
            {
                opRegular++;
                break;
            }

            case 4:
            {
                opRuim++;
                break;
            }

            default:
            {
                cout << "An�lise inv�lida, reinsira as informa��es!\n";
                i--;
                break;
            }
        }

        quantidadePessoas++;
    }


    cout << "\nA quantidade de pessoas que respondeu o question�rio �: " << quantidadePessoas;


    float mediaIdades = auxIdade / quantidadePessoas;

    cout << "\nA m�dia das idades de quem respondeu o question�rio �: " << mediaIdades;


    cout << "\nA porcentagem de an�lises �timas �: " << (opOtimo * 100) / quantidadePessoas;

    cout << "\nA porcentagem de an�lises boas �: " << (opBom * 100) / quantidadePessoas;

    cout << "\nA porcentagem de an�lises regulares �: " << (opRegular * 100) / quantidadePessoas;

    cout << "\nA porcentagem de an�lises ruins �: " << (opRuim * 100) / quantidadePessoas;
}
