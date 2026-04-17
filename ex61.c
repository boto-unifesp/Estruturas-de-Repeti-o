#include <stdio.h>

int main(){

    float v, valores=0, media;

    for (int i=0; i<10; i++){
        printf("Insira o valor: ");
        scanf("%f", &v);
        valores += v;
    }
    media = valores/10;
    printf("\n A média dos valores lidos é: %.2f", media);

    return 0;
}