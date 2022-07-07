#include <stdio.h>
int main(){
    int contador;
    printf("\nDigite um numero para a contagem: ");
    scanf("%d", contador);
    for (contador; contador >=1; contador --) {
        printf("%d", contador);
    }
    return 0;
}