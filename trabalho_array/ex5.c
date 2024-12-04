#include <stdio.h>

int main()
{
    float numeros[3];
    float num;
    float menor;
    float maior;
    
    while(2>1){
    for(int i = 0; i<3; i++){
        printf("Digite um número: \n");
        scanf("%f",&num);
        numeros[i] = num;
    }
    menor = numeros[0];
    
    for(int i = 0; i<3; i++){
        if(numeros[i]< menor){
            menor = numeros[i];
        }
    }
    
    for(int i = 0; i<3; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    
    printf("O menor número: %.2f \n", menor);
    printf("O maior número: %.2f \n", maior);
    }
    
    
    

    return 0;
}