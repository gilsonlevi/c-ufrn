#include <stdio.h>

int main()
{
    float arrayA1[3];
    float arrayA2[3];
    float num;

    
    while(2>1){
    for(int i = 0; i<3; i++){
        printf("Digite um número: \n");
        scanf("%f",&num);
        arrayA1[i] = num;
    }
    
    for(int i = 0; i<3; i++){
        arrayA2[i] = (arrayA1[i]) * (arrayA1[i]);
    }
    
    for(int i = 0; i<3; i++){
        printf("%.2f ", arrayA1[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i<3; i++){
        printf("%.2f ", arrayA2[i]);
    }
    
    printf("\n");
    }
    return 0;
}