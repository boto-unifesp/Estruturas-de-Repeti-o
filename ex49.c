#include <stdio.h>
#include <math.h>

int main(){
    
    float n1, n2, media;
    char op = 's';
    
    while (op == 's' || op == 'S'){
    printf("N1: ");
    scanf("%f", &n1);
    while (n1<0 || n1>10){
        printf("N1: ");
        scanf("%f", &n1);
    }

    printf("N2: ");
    scanf("%f", &n2);
    while (n2<0 || n2>10){
        printf("N2: ");
        scanf("%f", &n2);
    }

    media = (n1+n2)/2;
    printf("\n A média é %.1f", media);
    printf("Novo cálculo? (s/n)");
    scanf(" %c", &op);
    while (op != 's' && op != 'S' && op != 'n' && op != 'N'){
        printf("\n Novo cálculo? (s/n) ");
        scanf(" %c", &op);

        }
    }
    return 0;
}