#include <stdio.h>

float media (float a, float b){
    float media;
    
    media = (a + b)/2;
    
    return media;
    
}

int main()
{
    
    float avaliacao1;
    float avaliacao2;
    float trab1;
    float trab2;
    float mediaAvaliacao;
    float mediaTrab;
    float mediaFinal;
    
    printf("Bem vindo ao programa!!\n");
    printf("Digite o valor da primeira avaliação: \n");
    scanf("%f", &avaliacao1);
    
    printf("Digite o valor da segunda avaliação: \n");
    scanf("%f", &avaliacao2);
    
    printf("Digite o valor do primeiro trabalho: \n");
    scanf("%f", &trab1);
    
    printf("Digite o valor do segundo trabalho: \n");
    scanf("%f", &trab2);
    
    mediaAvaliacao = media(avaliacao1, avaliacao2);
    printf("Media das avaliações: %f \n", mediaAvaliacao);
    
    
    mediaTrab = media(trab1, trab2);
    printf("Media dos trabalhos: %f \n", mediaTrab);
    
    mediaFinal = media(mediaAvaliacao, mediaTrab);
    
    if(mediaFinal > 5){
        printf("Média final: %f PASSOU \n",mediaFinal);
    }
    else {
        printf("Média final: %f NÃO PASSOU \n",mediaFinal);
    }
    

    return 0;
}

