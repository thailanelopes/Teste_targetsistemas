#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[40];
    int tamanhoString;

    printf("Digite a  palavra á ser invertida: \n");
    fflush(stdin);
    scanf("%30[^\n]", &palavra);
    
    tamanhoString = strlen(palavra);
    
    printf("\nPalavra inversa:");
    
    while(tamanhoString >= 0)
    {
        
        printf("%c", palavra[tamanhoString]);
        
        tamanhoString--;
    }
}