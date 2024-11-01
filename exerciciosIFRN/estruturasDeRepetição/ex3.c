#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i = 0;
    int soma = 0;
    while(i<=200){
        soma += i;
        i++;
    }
    printf("%i", soma);
    return 0;
}