#include <stdio.h>

int main()
{
    int base = 0;
    int expoente = 0;
    int potencia = 0;
    while(2>1){
    printf("\nDigite a base: ");
    scanf("%d", &base);
    
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);
    potencia = base;
    for(int i = 1; i < expoente; i++){
        potencia = potencia * base;
    }
    
    printf("A potencia calculada foi: %d", potencia);
    
}
    return 0;
}
