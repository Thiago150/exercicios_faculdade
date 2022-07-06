#include <stdio.h>
 int main(void) {
    char parar;
    float notas;
    printf("Digite a nota final do aluno: ");
    scanf("%f", &notas);
    while (notas < 0 || notas > 10)
    {
        printf("\n Nota inválida! Digite a nota final do aluno: ");
        scanf("%f", &notas);
    }
    return 0;
 }