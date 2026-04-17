#include <stdio.h>

int main(){

    int n, tabuada;

    printf("N: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++){
        tabuada = n*i;
        printf("%d x %d = %d\n", n, i, tabuada);
    }

    return 0;
}