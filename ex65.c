#include <stdio.h>

int main(){

    int v1, v2, soma=0;

    printf("Insira o primeiro valor: ");
    scanf("%d", &v1);
    printf("Insira o segundo valor: ");
    scanf("%d", &v2);
    
    for (int i=v1; i<=v2; i++){
    soma += i;
    }

    printf("A soma é %d", soma);

    return 0;
}