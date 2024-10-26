#include <stdio.h>
#include <stdbool.h>

int main()
{
    int soma;
    int numero;
    
    while(true){
    soma = 0;
    printf("\nDigite um número: ");
    scanf("%i", &numero);
    
    while(true) {
        if(numero == 0) {
            break;
        }
        soma = soma + numero%10;
        numero = numero/10;
    }
    
    printf("%i", soma);
    }
}