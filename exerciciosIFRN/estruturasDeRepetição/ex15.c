#include <stdio.h>

int main()
{
    int numero = 0;
    while(2>1){
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            printf("%d - ", i);
        }
    }
}
    return 0;
}
