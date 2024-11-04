#include <stdio.h>
#include <stdbool.h>
int main()
{
    int numero = 0;
    int soma = 0;
    int i = 1;
    int somaPrim = 0;
    int somaNaoPrim = 0;
    
    printf("----------------------------------------\n");
    printf("BEM VINDO AO PROGRAMA\n");
    printf("CASO DESEJE PARAR, APERTE -1\n");
    while(true){
        soma = 0;
        printf("Digite um número: \n");
        scanf("%i", &numero);
        
        if(numero == -1) {
            break;
        }
        
        while(true){
            if(numero % i ==0){
                soma++;
            }
            
            if(i == numero){
                break;
            }
            
            i++;
        }
        
        if(soma > 2){
            printf("O número não é primo\n");
        }else {
            printf("O número é primo\n");
        
        }
    }
    
}