#include <stdio.h>

int main()
{
    int num = 0;
    int soma = 0;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma++;
        }
    }
    
    if(soma > 2){
        printf("O número não é primo");
    }else {
        printf("O número é primo");
    }
}