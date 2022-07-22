#include<stdio.h>
int somar(int valor) {
    if(valor == 0){
        //criterio de parada
        return valor;
    } else {
        //chamada recursiva
        return valor + somar(valor - 1);
    }
}
int main() {
    int n, resultado;
    printf("\nDigite um numero inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); //primeira chamada da função
    printf("\nResultado = %d", resultado);
    return 0;
}