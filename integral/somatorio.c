#include <stdio.h>

float funcao(float x){
    return x * x;
}

int main()
{
    float limInferior, limSuperior, passo;
    

    float soma = 0;
    float i = 0;
    float divisao = 0;
    
    printf("Digite o valor do limite inferior da integral: ");
    scanf("%f", &limInferior);
    
    printf("Digite o valor do limite Superior da integral: ");
    scanf("%f", &limSuperior);
     
    printf("Digite o valor do passo da integral: ");
    scanf("%f", &passo);
    
    while(i<limSuperior){
        
        // printf("Valor da soma: %f \n", soma);
        soma = soma + i;
        
        printf("Valor da soma: %f \n", soma);
        
        i = i + passo;
        
    }
    
    
    // for(int i = 0; i < 1; i+=0.2){
    //     soma = soma + i;
    // }
    
    printf("%f", soma);
    

    
	return 0;
}