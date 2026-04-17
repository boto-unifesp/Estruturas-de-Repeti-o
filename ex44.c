#include <stdio.h>

int main(){

    float v1, v2, divisao;

    printf("V1: ");
    scanf("%f", &v1);

    printf("V2: ");
    scanf("%f", &v2);

    while (v2 == 0){
    printf("V2: ");
    scanf("%f", &v2);
    }
    divisao = v1/v2;
    printf("O valor da divisão é %.1f", divisao);
    
    return 0;
}