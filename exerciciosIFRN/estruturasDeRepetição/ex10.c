#include <stdio.h>
#include <stdbool.h>
int main()
{
    int numero = 0;
    int soma = 0;
    int media = 0;
    int quantNum = 0;
    int maior = 0;
    int menor = 0;
    
    printf("----------------------------------------\n");
    printf("BEM VINDO AO PROGRAMA DE SOMA DE NÚMEROS\n");
    printf("CASO DESEJE PARAR, APERTE -1\n");
    while(true){

        printf("Digite um número: \n");
        scanf("%i", &numero);
        
        if(numero == -1) {
            break;
        }
        
        soma += numero;
        quantNum++;
        if (numero > maior){
            maior = numero;
        }
        
        if(numero < menor){
            menor = numero;
        }
    }
    media = soma/quantNum;
    
    printf("A quantidade de números digitados foi: %i\n", quantNum);
    printf("A média aritmética foi: %i\n", media);
    printf("O maior número digitado foi: %i\n", maior);
    printf("O menor número digitado foi: %i\n", menor);
    
}