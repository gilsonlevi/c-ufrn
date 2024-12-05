#include <stdio.h>

int main()
{
	int matriz[4][4];
	int num;
	
	int somaDiagonalCima = 0;
    int somaDiagonalBaixo = 0;

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("Digite os numeros da coluna %i \n", i);
			scanf("%i", &num);
			matriz[i][j] = num;
		}
	}

    printf("MATRIZ DIGITADA: \n");
	for(int i = 0 ; i <4; i++) {
        for(int j = 0; j < 4; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // DIAGONAL SECUNDARIA DE CIMA
    int j = 1;
    for(int i = 0; i < 3; i++) {

        somaDiagonalCima = somaDiagonalCima + matriz[i][j];

        printf("Matriz no ponto:  %i %i eh o numero: %i %i",i, j, matriz[i][j]);
        
        if(j < 3){
            j = j + 1;
        }
    }

    //DIAGONAL SECUNDARIA DE BAIXO
    j = 0;
    for(int i = 1; i < 4; i++) {

        somaDiagonalBaixo = somaDiagonalBaixo + matriz[i][j];

        printf("Matriz no ponto:  %i %i eh o numero: %i %i",i, j, matriz[i][j]);
        
        if(j < 3){
            j = j + 1;
        }
    }
    
    printf("Soma da diagonal secundaria de cima: %i \n", somaDiagonalCima);

    printf("Soma da diagonal secundaria de baixo: %i \n", somaDiagonalBaixo);
    
	return 0;
}