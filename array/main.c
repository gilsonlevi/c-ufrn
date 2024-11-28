#include <stdio.h>

int main()
{
    int numeros[] = {1,2,3,4};
    
    printf("%i\n", numeros[0]);
    
    for(int i = 0; i < 4; i++){
        printf("%i\n", numeros[i]);
    }

    return 0;
}