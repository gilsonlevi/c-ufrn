#include <stdio.h>

int main()
{
    int linhas;
    int colunas;

    printf("Digite a qtd de linhas da matriz\n");
    scanf("%i", &linhas);
    
    printf("Digite a qtd de colunas da matriz\n");
    scanf("%i", &colunas);


	int matriz[linhas][colunas];
	int num;
	
	int somaDiagonalCima = 0;
    int somaDiagonalBaixo = 0;

	for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
			printf("Digite os numeros da coluna %i \n", i);
			scanf("%i", &num);
			matriz[i][j] = num;
		}
	}

    printf("MATRIZ DIGITADA: \n");
	for(int i = 0 ; i <linhas; i++) {
        for(int j = 0; j < colunas; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // DIAGONAL SECUNDARIA DE CIMA
    int j = 1;
    for(int i = 0; i < linhas - 1; i++) {

        somaDiagonalCima = somaDiagonalCima + matriz[i][j];
        
            j = j + 1;
    }

    //DIAGONAL SECUNDARIA DE BAIXO
    j = 0;
    for(int i = 1; i < linhas; i++) {

        somaDiagonalBaixo = somaDiagonalBaixo + matriz[i][j];
            j = j + 1;
    }
    
    printf("Soma da diagonal secundaria de cima: %i \n", somaDiagonalCima);

    printf("Soma da diagonal secundaria de baixo: %i \n", somaDiagonalBaixo);
    
	return 0;
}