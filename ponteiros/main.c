#include <stdio.h>

int main()
{
    int var = 5;
    int* point = &var;
    
    int* pointpoint = &point;
    
    printf("Conteudo de var: %d\n", var);
    printf("Endereço de var: %p\n", &var);
    
    
    printf("Endereço de var sendo apontado: %p\n", point);
    
    printf("Conteudo que está sendo apontado: %d\n", *point);
    
    printf("Endereço do ponteiro: %p\n", pointpoint);


    return 0;
}
