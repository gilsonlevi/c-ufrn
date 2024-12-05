#include <stdio.h>

float areaRet(float altura, float comprimento) {
	return altura * comprimento;
}


int main()
{
	int matriz[4][4];
	int num;
	
	int somaMatrizPrincipal = 0;
	
	int somaMatrizSecunAcima = 0;

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
    
    int j = 1;
    for(int i = 0; i < 4; i++) {

        somaMatrizPrincipal = somaMatrizPrincipal + matriz[i][j];
        
        if(j < 4){
            j = j + 1;
        }
    }
    
    printf("Soma da diagonal principal: %i \n", somaMatrizPrincipal);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        
        printf("%i", matriz[i][j]);
        }
    }
    
	return 0;
}