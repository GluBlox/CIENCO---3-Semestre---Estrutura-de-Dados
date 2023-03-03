#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*
    8.Em uma eleição presidencial existem dois candidatos Os votos são informados através de códigos Os dados utilizados para a contagem dos votos têm se a seguinte codificação 1 2 voto para os respectivos candidatos 3 voto nulo 4 voto em branco Elabore um programa em C++ que leia o código do candidato em um voto Como finalizador do conjunto de votos, tem se o valor 0 Calcule e escreva 1 percentual de votos para cada candidato 2 percentual de votos nulos 3 percentual de votos em branco
    */

    //Start

    int voto, candidato1 = 0, candidato2 = 0, nulo = 0, branco = 0;

    for(int i = 0; i < 10; i++)
    {
        cout << "\nInsira seu voto (1 - Candidato1, 2 - Candidato2, 3 - Nulo, 4 - Branco): ";
        cin >> voto;


        switch(voto)
        {
            case 1:
                {
                    candidato1++;
                    break;
                }

            case 2:
                {
                    candidato2++;
                    break;
                }

            case 3:
                {
                    nulo++;
                    break;
                }

            case 4:
                {
                    branco++;
                    break;
                }

            default:
                {
                    cout << "Código inválido, insira seu voto novamente!";
                    i--;
                    break;
                }
        }
    }


    int totalVotos = candidato1 + candidato2 + nulo + branco;

    cout << "\n";

    cout << "Candidato1 recebeu " << (candidato1 * 100) / totalVotos << "% dos votos" << endl;
    cout << "Candidato2 recebeu " << (candidato2 * 100) / totalVotos << "% dos votos" << endl;
    cout << (nulo * 100) / totalVotos << "% dos votos foram nulos" << endl;
    cout << (branco * 100) / totalVotos << "% dos votos foram em branco" << endl;

    cout << "\n";

    if(candidato1 > candidato2) cout << "Candidato1 vence as eleições!\n";
    else if(candidato2 > candidato1) cout << "Candidato2 vence as eleições!\n";
    else cout << "Segundo turno!\n";
}
