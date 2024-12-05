#include <stdio.h>

int main()
{
    int ordem;

    printf("Digite a ordem da matriz\n");
    scanf("%i", &ordem);


	int matriz[ordem][ordem];
	int num;
	
	int somaDiagonalCima = 0;
    int somaDiagonalBaixo = 0;

	for(int i = 0; i < ordem; i++) {
		for(int j = 0; j < ordem; j++) {
			printf("Digite os numeros da coluna %i \n", i);
			scanf("%i", &num);
			matriz[i][j] = num;
		}
	}

    printf("MATRIZ DIGITADA: \n");
	for(int i = 0 ; i <ordem; i++) {
        for(int j = 0; j < ordem; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // DIAGONAL SECUNDARIA DE CIMA
    int j = 1;
    for(int i = 0; i < ordem - 1; i++) {

        somaDiagonalCima = somaDiagonalCima + matriz[i][j];
        
        if(j < ordem - 1){
            j = j + 1;
        }
    }

    //DIAGONAL SECUNDARIA DE BAIXO
    j = 0;
    for(int i = 1; i < ordem; i++) {

        somaDiagonalBaixo = somaDiagonalBaixo + matriz[i][j];
        
        if(j < ordem - 1){
            j = j + 1;
        }
    }
    
    printf("Soma da diagonal secundaria de cima: %i \n", somaDiagonalCima);

    printf("Soma da diagonal secundaria de baixo: %i \n", somaDiagonalBaixo);
    
	return 0;
}