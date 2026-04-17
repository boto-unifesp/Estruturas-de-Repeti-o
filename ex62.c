#include <stdio.h>

int main(){

    int alunos;
    float nota, soma_notas=0, media;

    printf("Insira a quantidade de alunos da turma: ");
    scanf("%d", &alunos);

    for (int i=0; i<alunos; i++){
        printf("Insira a nota do aluno: ");
        scanf("%f", &nota);
        soma_notas += nota;
    }

    media = soma_notas/alunos;
    printf("A média das notas é %.2f", media);

    return 0;
}