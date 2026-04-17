#include <stdio.h>

int main(){

    int n, negativos=0;

    printf("Digite 10 valores:\n");

    for (int i=1; i<= 10; i++){
        printf("Valor %d: ", i);
        scanf("%d", &n);

        if (n<0){
            negativos++;
        }
    }

    printf("\n O total de números negativos é: %d\n", negativos);

    return 0;

}