#include <stdio.h>

int main()
{
    int qtProduto = 0;
    float precoProduto = 0;
    float valorTotal = 0;
    
    printf("Qual a quantidade de produtos: \n");
    scanf("%i", &qtProduto);
    
    for(int i = 0; i < qtProduto; i++){
        printf("Digite o preço do produto: \n");
        scanf("%f", &precoProduto);
        valorTotal += precoProduto;
    }
    
    float avista = valorTotal - (valorTotal * 0.02);
    float parcelado = valorTotal * 0.002 + (valorTotal/3); 
    
    printf("Preço total da compra: %f \n", valorTotal);
    printf("Qual será a opção de pagamento: \n");
    printf("AVISTA: %f \n", avista);
    printf("PARCELADO: %f \n", parcelado);
    
    
    
    
    

    return 0;
}
