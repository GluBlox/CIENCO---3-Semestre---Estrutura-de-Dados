//Módulo contendo operações matemáticas

int fatorial(int n)
{
    int fat = 1;


    for(int i = 1; i < n; i++)
    {
        fat = fat * (i + 1);
    }

    return fat;
}


int areaQuadrado(int lado)
{
    return lado * lado;
}


int areaRetangulo(int altura, int base)
{
    return altura * base;
}
