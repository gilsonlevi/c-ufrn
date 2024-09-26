 float mediaUniv(){
        float nota1, nota2, nota3, media, rec, notaFinal;
        
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        
        media = (nota1 + nota2 + nota3)/3;
        
        if(media >= 6.0) {
            printf("O aluno está aprovado com media %.2f: ", media);
        }else if (media < 3) {
            printf("O aluno está reprovado com media %.2f: ", media);
        }else {
            printf("O aluno está em recuperação com media %.2f\n: ", media);
            printf("Digite a nota da recuperação: ");
            scanf("%f", &rec);
            
            notaFinal = rec + media;
            
            if(notaFinal >= 7.0) {
                printf("O aluno está aprovado com media final %.2f: ", notaFinal );
            } else {
                printf("O aluno está reprovado com media final %.2f", notaFinal);           
                
            }
        }
 }