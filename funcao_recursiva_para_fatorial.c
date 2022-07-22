#include<stdio.h>
int fatorial(int valor) {
    if(valor != 1) {
        //chamada recursiva
        return valor * fatorial(valor - 1);
    } else {
        //criterio de parada
        return valor;
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("\nresultado = %d", resultado);
    return 0;
}