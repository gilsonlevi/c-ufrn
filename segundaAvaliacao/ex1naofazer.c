#include <stdio.h>

// Definição da estrutura para representar um retângulo
typedef struct {
    float altura;
    float comprimento;
} Retangulo;

// Função que calcula a área do retângulo
float areaRet(float altura, float comprimento) {
    return altura * comprimento;
}

// Função para ler os valores do retângulo
Retangulo lerRetangulo() {
    Retangulo r;
    printf("Digite a altura do retângulo: \n");
    scanf("%f", &r.altura);
    printf("Digite o comprimento do retângulo: \n");
    scanf("%f", &r.comprimento);
    return r;
}

int main() {
    Retangulo ret;
    float area;

    printf("Bem-vindo ao programa de cálculo de área!\n");

    // Lê os valores do retângulo
    ret = lerRetangulo();

    // Calcula a área usando a função existente
    area = areaRet(ret.altura, ret.comprimento);

    // Exibe o resultado
    printf("O seu retângulo tem %.2f de área!\n", area);

    return 0;
}
