#include <stdio.h>

int main()
{
    int A,B; //Criando as variaveis A e B
    
    A = 10; //Adicionando o valor 10 a variavel A
    B = 20; //Adicionando o valor 20 a variavel B
    
    
    int* ptrA = &A; //Criando um apontador que aponta para o endereço da variavel A
    
    int* ptrB = &B; //Criando um apontador que aponta para o endereço da variavel B
    
    printf("Valor de A %i \n", A);
    printf("Valor de A %i \n", B);
    
    // printf("Endereço de A a partir do apontador: %p \n", ptrA);
    // printf("Endereço de B a partir do apontador: %p \n", ptrB);
    
    // printf("Valor de A a partir do apontador: %i \n", *ptrA);
    // printf("Valor de B a partir do apontador: %i \n", *ptrB);
    
    printf("Endereço de A a partir do apontador: %p \n", ptrA);
    printf("Endereço do apontador a partir do apontador: %p \n", &ptrA);
    
    
    return 0;
}
