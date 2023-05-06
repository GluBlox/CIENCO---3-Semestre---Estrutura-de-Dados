#include <iostream>

using namespace std;

void ImprimeVetor(int num[]);
void BubbleSort3(int num[]);

int main()
{
    int num[5];

    for(int i = 0; i <= 4; i++)
    {
        cout << "Digite o numero: ";
        cin >> num[i];
    }

    BubbleSort3(num);
    ImprimeVetor(num);
}

void ImprimeVetor(int num[])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << i + 1 << "º numero: " << num[i] << endl;
    }
}

void BubbleSort3(int num[])
{
    int troca = 0;
    int conta = 1;

    do
    {
        for(int j = 1; j <= 4; j++)
        {
            for(int i = 4; i >= j; i--)
            {
                if(num[i] > num[i - 1])
                {
                    int aux = num[i];
                    num[i] = num[i - 1];
                    num[i - 1] = aux;

                    troca = 1;
                }
                else
                {
                    troca = 0;
                }
            }
        }

        conta++;
    }
    while(troca == 1);


    cout << endl << endl << "contagem: " << conta << endl << endl;
}
