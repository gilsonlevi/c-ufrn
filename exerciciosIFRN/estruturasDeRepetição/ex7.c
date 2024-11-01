#include <stdio.h>
#include <stdbool.h>
int main()
{
    int inicio = 0;
    int fim = 0;
    printf("Digite o primero número: ");
    scanf("%i", &inicio);
    
    printf("Digite o ultimo número: ");
    scanf("%i", &fim);

    for(inicio ;inicio <= fim; inicio++){
        printf("%i - ",inicio);
    }
    
}