#include <stdio.h>

int main(){
    int n, valores=0;

    for (int i=0; i<10; i++){
        printf("Valor %d: ", i);
        scanf("%d", &n);

        if (n>=10 && n<=20){
        valores++;
        }
    }
    printf("\nA quantidade de valores que estão no intervalo é: %d\n", valores);
    printf("\nA quantidade de valores que estão fora do intervalo é: %d\n", 10-valores);

    return 0;
}