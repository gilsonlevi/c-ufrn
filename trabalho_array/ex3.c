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
    
    printf("Digite a posição que você deseja ver: \n");
    scanf("%i", &num);
    
    printf("%i", numeros[num]);
    

    return 0;
}