#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero = 0;
    int binario[7];
    while(true) {
    printf("\nDigite um número: ");
    scanf("%i", &numero);
    
    for(int i = 0; i <= 7; i++) {
        binario[i] = numero%2;
        numero = numero/2;
    }
    
    for(int j = 7; j >= 0; j--) {
        printf("%i",binario[j]);
    }
    }
}