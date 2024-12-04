#include <stdio.h>

int main()
{
    int numeros[10];
    int num;
    
    for(int i = 0; i<10; i++){
        printf("Digite um número: \n");
        scanf("%i",&num);
        numeros[i] = num;
    }
    
        for(int i = 0; i<10; i++){
        printf("%i -", numeros[i]);

    }
    return 0;
}