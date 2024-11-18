#include <stdio.h>

int main()
{

    int numeroLinhasA = 0;
    int numeroColunasA = 0;
    int numeroLinhasB = 0;
    int numeroColunasB = 0;  

    printf("Digite o número de linhas do arrayA: \n");
    scanf("%i", &numeroLinhasA);
    
    printf("Digite o número de colunas do arrayA: \n");
    scanf("%i", &numeroColunasA);
    
    
    printf("Digite o número de linhas do arrayB: \n");
    scanf("%i", &numeroLinhasB);
    
    printf("Digite o número de colunas do arrayB: \n");
    scanf("%i", &numeroColunasB);
    
    int numero = 0;
    int arrayA[numeroLinhasA][numeroColunasA];
	int arrayB[numeroLinhasB][numeroColunasB];  
	
	int arrayC[numeroLinhasA][numeroColunasB];
    
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
    
    printf("ARRAY A: \n");
	for(int i = 0 ; i < numeroLinhasA; i++) {
        for(int j = 0; j < numeroColunasA; j++){
            printf("%i ", arrayA[i][j]);
        }
        printf("\n");
    }
    
    printf("ARRAY B: \n");
	for(int i = 0 ; i <numeroLinhasB; i++) {
        for(int j = 0; j < numeroColunasB; j++){
            printf("%i ", arrayB[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i< numeroLinhasA; i++){
        for(int j = 0; j < numeroColunasB; j++){
            arrayC[i][j] = 0;
            for(int y = 0; y < numeroColunasA; y++){
                arrayC[i][j] += arrayA[i][y] * arrayB[y][j];
            }
        }
    }
    
    printf("ARRAY C: \n");
	for(int i = 0 ; i <numeroLinhasA; i++) {
        for(int j = 0; j < numeroColunasB; j++){
            printf("%i ", arrayC[i][j]);
        }
        printf("\n");
    }
    
    }else {
        printf("Aprenda a digitar direito");
    }
    return 0;
}