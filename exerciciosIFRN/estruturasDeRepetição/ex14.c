#include <stdio.h> 
int main() { 
    int soma = 0; 
    int somaPrim = 0; 
    
    printf("%d", somaPrim); 
    for(int i = 1; soma <= 50; i++){ 
        somaPrim = 0; 
        for(int j = 1; j <= i; j++){ 
            if(i%j==0){ 
                somaPrim = somaPrim + 1; 
            } 
        } 
            if(somaPrim <= 2){ 
                soma = soma + 1; 
                printf("%i - ", i); 
            }
    } 
    return 0; 
}