#include <stdio.h>

int main(){

    int soma=0, contador=0;
    float media;

    for (int i=15; i<=100; i++){
        soma += i;
        contador++;
    }

    media = (float)soma/contador;
    printf("A média é %.2f", media);

    return 0;

}