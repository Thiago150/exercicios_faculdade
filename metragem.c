#include <stdio.h>

int main() {
    float metragem1, metragem2, resultado;
    int resp;
    metragem1 = 0;
    metragem2 = 0;
    resultado = 0;

    printf("\n CÁlCULO DE METROS QUADRADOS");
    do
    {
        printf("\n\nDigite a primeira metragem do terreno: ");
        scanf("%f", &metragem1);
        printf("\n\nDigite a segunda metragem do terreno: ");
        scanf("%f", &metragem2);
        resultado = metragem1 * metragem2;
        printf("\n\nO terreno tem = %.2f m2", resultado);
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    } while (resp == 1);
    return 0;
}