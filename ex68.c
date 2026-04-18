#include <stdio.h>

int main(){

    int mercadoria; 
    float valor_mercadoria, valor_estoque=0, media;

    printf("Insira a quantidade total de mercadoria no estoque: ");
    scanf("%d", &mercadoria);

    for (int i=0; i<mercadoria; i++){
        printf("Insira o valor da mercadoria: ");
        scanf("%f", &valor_mercadoria);
        valor_estoque += valor_mercadoria;
    }

    media = valor_estoque/mercadoria;
    printf("\nO valor total do estoque é %.2f\n", valor_estoque);
    printf("\nA média dos valores da mercadoria é %.2f\n", media);

    return 0;
}