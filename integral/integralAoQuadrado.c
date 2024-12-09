#include <stdio.h>

float funcao(float x){
    return x*x;
}

int main()
{
    float limInferior, limSuperior, passo;
    

    float somaAB = 0;
    float somaSomatorio = 0;
    float somaTotal = 0;
    float i = 0;
    float divisao = 0;

    
    printf("Digite o valor do limite inferior da integral: ");
    scanf("%f", &limInferior);
    
    printf("Digite o valor do limite Superior da integral: ");
    scanf("%f", &limSuperior);
     
    printf("Digite o valor do passo da integral: ");
    scanf("%f", &passo);
    
    printf("Limites de interação: %f %f, passo de integração: %f", limInferior, limSuperior, passo);
    
    somaAB = funcao(limInferior) + funcao(limSuperior);
    
    
    printf("\n");
    
    while(i<limSuperior-passo){
        printf("Valor de i : %.3f \n", i);
        
        i = i + passo;
        
        printf("Valor de i depois da incrementação : %.3f \n", i);
        
        
        somaSomatorio = somaSomatorio + funcao(i);
        
        printf("Valor da funcao: %.3f \n",funcao(i));
        
        printf("Valor do somatorio: %.3f \n", somaSomatorio);
        
        
    }
    
    printf("\n");
    
    somaTotal = ((2 * somaSomatorio) + somaAB)*passo/2;
    
    printf("Integral final: %f", somaTotal);
    

    
	return 0;
}