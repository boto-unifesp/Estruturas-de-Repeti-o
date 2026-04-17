#include <stdio.h>

int main(){

    float numero, soma_numeros=0;

    for (int i=0; i<10; i++){
        printf("Insira um número: ");
        scanf("%f", &numero);
        soma_numeros += numero;
    }
    printf("\nA soma dos números é %.2f", soma_numeros);

    return 0;
}