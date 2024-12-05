#include <stdio.h>

float areaRet(float altura, float comprimento){
    return altura * comprimento;
}

int main()
{
    float altura;
    float comprimento;
    float area;
    
    int numeroFinal;
    int somaDePares;
    
    printf("Bem vindo ao meu programa!!\n");
    printf("Digite a altura do retangulo: \n");
    scanf("%f", &altura);
    
    printf("Digite o comprimento do retangulo: \n");
    scanf("%f", &comprimento);
    
    area = areaRet(altura, comprimento);
    
    printf("O seu retângulo tem %.2f de area! \n", area);

    return 0;
}