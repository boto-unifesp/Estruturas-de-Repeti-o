#include <stdio.h>

int main(){

    float numero, soma_numeros=0;

    for (int i=0; i<10; i++){
        printf("Insira um número: ");
        scanf("%f", &numero);
        
        if (numero<40){
            soma_numeros += numero;
        }
    }
    printf("A soma dos números menores que 40 é %.2f", soma_numeros);
    
    return 0;
}