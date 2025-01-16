#include <stdio.h>

int funcao(int c, int d){
    return c + d;
}

int main()
{
    int A = 10;
    int B = 50;
    
    int* ptrA = &B;
    int* ptrB = &A;
    
    int r = funcao(*ptrA, *ptrB);
    
    printf("%i", r);
    
    return 0;
}
