#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indice = 13, soma = 0;

    for(int k = 0; k < indice; k++  )
    {
        soma = soma + k;
    }

    printf("Valor da Soma: é - %d \n",soma);

    return 0;
}