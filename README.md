#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i;
    int numero;
    int numeroFinal = numero;
    int binario[31];
    int prox;
    printf("Digite um número: ");
    scanf("%i", &numero);

    for(i = 0; i <=31; i++ ){
        binario[i] = numero % 2;
        numero = numero/2;
    }
    
    for(i = 31; i >=0; i-- ){
        printf("%i", binario[i]);
    }
    
    return 0;
}
