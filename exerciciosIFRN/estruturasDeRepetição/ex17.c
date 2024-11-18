#include <stdio.h>

int main()
{
    float numerador = 1;
    float denominador = 1;
    float soma = 0;
    
    for(int i = 1; i <= 50; i++){
        soma = soma + (numerador/denominador);
        numerador = numerador + 2;
        denominador++;
    }
    printf("%f",soma);
    return 0;
}
