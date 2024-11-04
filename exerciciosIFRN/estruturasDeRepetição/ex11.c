#include <stdio.h>

int main()
{
    int num = 0;
    int tabuada = 0;
    printf("Digite um número: ");
    scanf("%i", &num);
    
    for(int i = 0; i <=10; i++){
        tabuada = num * i;
        printf("%i \n", tabuada);
    }
	return 0;
}