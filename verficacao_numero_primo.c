#include <stdio.h>

int ehPrimo(int n) {
    return ehPrimoAux(n, 2);
}

int ehPrimoAux(int n, int x) {
    if (x == n) {
        return 1;
    } else if (n % x == 0) {
        return 0;
    } else {
        return ehPrimoAux(n, x + 1);
    }
}

int main() {
    int resultado = 0, n;
    printf("\ndigite um numero inteiro positivo: ");
    scanf("%d", &n);

    resultado = ehPrimo(n);
     printf("\ne um numero primo = %d", resultado);
    return 0;
}
