#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    10.Em um cinema, certo dia, cada espectador respondeu a um questionário, que perguntava a sua idade (ID) e a opinião em relação ao filme (OP) seguindo os seguintes critérios:

    Opinião(OP)     Significado
         1             Ótimo
         2              Bom
         3            Regular
         4             Ruim

    Ao final da pesquisa será indicado quando a idade do usuário for informada como negativa (idade inexistente). Construa um programa em C++ que, lendo esses dados, calcule e apresente:

    A- Quantidade de pessoas que respondeu a pesquisa

    B- Média de idade das pessoas que responderam a pesquisa

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


        cout << "Insira sua opinião(1-Ótimo / 2-Bom / 3-Regular / 4-Ruim): ";
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
                cout << "Análise inválida, reinsira as informações!\n";
                i--;
                break;
            }
        }

        quantidadePessoas++;
    }


    cout << "\nA quantidade de pessoas que respondeu o questionário é: " << quantidadePessoas;


    float mediaIdades = auxIdade / quantidadePessoas;

    cout << "\nA média das idades de quem respondeu o questionário é: " << mediaIdades;


    cout << "\nA porcentagem de análises ótimas é: " << (opOtimo * 100) / quantidadePessoas;

    cout << "\nA porcentagem de análises boas é: " << (opBom * 100) / quantidadePessoas;

    cout << "\nA porcentagem de análises regulares é: " << (opRegular * 100) / quantidadePessoas;

    cout << "\nA porcentagem de análises ruins é: " << (opRuim * 100) / quantidadePessoas;
}
