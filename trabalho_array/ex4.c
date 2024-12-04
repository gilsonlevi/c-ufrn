#include <stdio.h>

int main()
{
    float notas[10];
    float acimaMedia[10];
    
    float num;
    float somaNotas;
    float media;
    int numMedia = 0;
    
    for(int i = 0; i<10; i++){
        printf("Digite uma nota: \n");
        scanf("%f",&num);
        notas[i] = num;
        somaNotas += num;
    }
    
    for(int i = 0; i<10; i++){
        if(notas[i] >6){
            numMedia++;
        }
    }
    
    media = somaNotas/10;
    
    printf("Soma das notas: %.2f \n", somaNotas);
    printf("Média das notas: %.2f \n", media);
    printf("Quantidade de alunos acima da media: %i \n", numMedia);
    return 0;
}