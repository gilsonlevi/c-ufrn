#include <stdio.h>

int main()
{
    int x[] = {10, 20, 30};
    int* p = &x[1];
    
    // printf("Endereço do array posição 0: %p \n", &x[1]);
    
    char* fruit[3] = {"apples", "bananas", "cherries"};
    
    printf("Eu tenho %p %c\n", p, *fruit[1]);
    
    printf("%s", fruit[0]);
    return 0;
}
