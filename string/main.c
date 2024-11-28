#include <stdio.h>

int main()
{
    // A linguagem C não tem uma variavel para guardar textos, sendo assim fazemos um array de char

    char nome [] = "Julia Tavares";
    
    printf("%s\n", nome);
    
    // Peganda a primeira letra
    char primeiraLetra  = nome[0];
    
    printf("%c\n", primeiraLetra);
    
    //Mudando letras
    
    nome[4] = 'o';
    
    printf("%s\n", nome);
    
    printf("%i", sizeof(nome));
    
    return 0;
}