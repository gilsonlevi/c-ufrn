#include <stdio.h>
#include <stdbool.h>
int main()
{
    int quanti = 0;
    int num = 0;
    int soma = 0;
    printf("Quantos números você quer inserir: ");
    scanf("%i", &quanti);

    for(int i = 1; i <= quanti; i++){
        printf("Digite um número: ");
        scanf("%i", &num);
        soma += num;
    }

    printf("%i", soma);
}