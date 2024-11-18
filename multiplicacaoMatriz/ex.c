#include <stdio.h>

int main()
{

    int numeroLinhasA = 0;
    int numeroColunasA = 0;
    int numeroLinhasB = 0;
    int numeroColunasB = 0;  

    int numero = 0;
	
	int arrayA[numeroLinhasA][numeroColunasA];
	int arrayB[numeroLinhasB][numeroColunasB];  


    printf("Digite o número de linhas do arrayA: \n");
    scanf("%i", &numeroLinhasA);
    
    printf("Digite o número de colunas do arrayA: \n");
    scanf("%i", &numeroColunasA);
    
    
    printf("Digite o número de linhas do arrayB: \n");
    scanf("%i", &numeroLinhasB);
    
    printf("Digite o número de colunas do arrayB: \n");
    scanf("%i", &numeroColunasB);
    
    if(numeroColunasA == numeroLinhasB){
        
    for(int i = 0 ; i < numeroLinhasA; i++) {
        for(int j = 0; j < numeroColunasA; j++){
            printf("Digite o número do arrayA na posição: %i %i \n", i, j);
            scanf("%i", &numero);
            
            arrayA[i][j] = numero;
        }
	}
	
	for(int i = 0 ; i <numeroLinhasB; i++) {
        for(int j = 0; j < numeroColunasB; j++){
            printf("Digite o número do arrayB na posição: %i %i \n", i, j);
            scanf("%i", &numero);
            
            arrayB[i][j] = numero;
        }
    }
        
    for(int i = 0 ; i < 5; i++){
        for(int j = 0; i <5 ; j++){
                       
            }
        }

    }else {
        printf("Aprenda a digitar direito");
    }
    return 0;
}