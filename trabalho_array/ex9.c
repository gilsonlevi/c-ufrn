#include <stdio.h>

int main()
{
    float arrayA1[3];
    float arrayA2[3];
    float arrayA3[3];
    int contArray3;
    float num;

    
    for(int i = 0; i<3; i++){
        printf("Digite um número: \n");
        scanf("%f",&num);
        arrayA1[i] = num;
    }  
    for(int i = 0; i<3; i++){
        printf("Digite um número: \n");
        scanf("%f",&num);
        arrayA2[i] = num;
    }  
    
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arrayA1[i] == arrayA2[j]){
                arrayA3[contArray3] = arrayA1[i];
                contArray3++;
            }
            
        }
    }
    
    for(int i = 0; i<3; i++){
        printf("%.2f ", arrayA3[i]);
    }
    
    
    return 0;
}