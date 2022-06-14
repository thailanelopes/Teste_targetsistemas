
/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
 (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número,
 ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{

    int achaNumero, i = 0, prox, antessessor, existe = 0;

    printf("Digite o número que deseja encontrar na sequencia Fibonacci: \n");
    scanf("%d", &achaNumero);
    

    prox =1;

    while(i <= achaNumero)
    {
        if(i == achaNumero)
        {
            printf("Este número se encontra na sequência Fibonacci");

            existe = 1;
        }
        
        antessessor = i;
        i = i + prox;
        prox = antessessor;
    }
    
    if(existe == 0)
    {
        printf("Não pertence a sequência Fibonacci");
    }
}