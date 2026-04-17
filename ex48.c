#include <stdio.h>
#include <math.h>

int main(){
    
    float n1, n2, media;

    printf("N1: ");
    scanf("%f", &n1);
    while (n1<0 || n1>10){
        printf("N1: ");
        scanf("%f", &n1);
    }

    printf("N2: ");
    scanf("%f", &n2);
    while (n1<0 || n1>10){
        printf("N2: ");
        scanf("%f", &n2);
    }

    media = (n1+n2)/2;

    printf("\n A média é %.1f", media);

    return 0;

}