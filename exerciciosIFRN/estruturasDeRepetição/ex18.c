#include <stdio.h>

int main()
{
    float numero = 0;
    float denominador = 1;
    float soma = 0;
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    for(int i = 1; i <= numero; i++){
        soma = soma + (1/denominador);
        denominador++;
    }
    printf("%f",soma);
    return 0;
}
