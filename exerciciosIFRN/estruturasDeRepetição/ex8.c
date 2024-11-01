#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num = 0;
    int soma = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite um número: ");
        scanf("%i", &num);
        soma += num;
    }

    printf("%i", soma);
}