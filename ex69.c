#include <stdio.h>

int main(){

    int mercadoria=0; 
    float valor_mercadoria, valor_estoque=0, media;
    char op='s';

    while (op == 's' || op == 'S'){
        printf("Insira o valor da mercadoria: ");
        scanf("%f", &valor_mercadoria);
        valor_estoque += valor_mercadoria;
        mercadoria++;

        printf("Mais mercadoria? (s/n)");
        scanf(" %c", &op);
    }

    media = valor_estoque/mercadoria;
    printf("\nO valor total do estoque é %.2f\n", valor_estoque);
    printf("\nA média dos valores da mercadoria é %.2f\n", media);

    return 0;
}