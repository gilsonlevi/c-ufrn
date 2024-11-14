#include <stdio.h>

int main()
{
    float somaTotal = 0;
    int mesas = 0;
    float peso = 0;
    float precoPrato = 0;
    float bebida = 0;
    
    printf("Digite a quantidade de pessoas na mesa: \n");
    scanf("%i", &mesas);
    
    for(int i = 0; i < mesas; i++){
        printf("Digite o peso do prato: \n");
        scanf("%f", &peso);
        
        printf("Digite o valor gasto com bebida: \n");
        scanf("%f", &bebida);
        precoPrato = peso * 0.02;
        
        
        somaTotal = somaTotal + precoPrato + bebida;
        
    }
    
    printf("O valor total da conta foi de: %f", somaTotal);



    return 0;
}
