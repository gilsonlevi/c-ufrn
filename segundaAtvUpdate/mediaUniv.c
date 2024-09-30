#include <stdio.h>
#include <stdbool.h>

int main(){
 float mediaUniv(){
        float nota1, nota2, nota3, media, rec, notaFinal;
        
        while(true) {
            
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            if(nota1 >10 || nota1 < 0) {
            printf("O número digitado não é valido\n");
        }else {
            break;
        } 
        }
        
        while(true) {
            
            printf("Digite a segunda nota:");
            scanf("%f", &nota2);
            if(nota2 >10 || nota2 < 0) {
            printf("O número digitado não é valido\n");
        }else {
            break;
        } 
        }
        
        while(true) {
            
            printf("Digite a terceira nota:");
            scanf("%f", &nota3);
            if(nota3 >10 || nota3 < 0) {
            printf("O número digitado não é valido\n");
        }else {
            break;
        } 
        }
        
        
        media = (nota1 + nota2 + nota3)/3;
        
        if(media >= 6.0) {
            printf("O aluno está aprovado com media %.2f: ", media);
        }else if (media < 3) {
            printf("O aluno está reprovado com media %.2f: ", media);
        }else {
            printf("O aluno está em recuperação com media: %.2f \n", media);
            while(true) {
                printf("Digite a nota da recuperação: ");
                scanf("%f", &rec);
                if(rec > 10 || rec < 0) {
                    printf("O número digitado não é valido\n");
                }else {
                    break;
                }
            }

            notaFinal = (7.5*rec + 2.5*media)/10;
            
            if(notaFinal >= 7.0) {
                printf("O aluno está aprovado com media final %.2f: ", notaFinal );
            } else {
                printf("O aluno está reprovado com media final %.2f", notaFinal);           
                
            }
        }
 }
 
 
    mediaUniv();
}