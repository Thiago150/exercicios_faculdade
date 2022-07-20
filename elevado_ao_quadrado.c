#include <stdio.h>

float calcular(){
    float num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);
    return num * num;
}
int main(){
    float resultado = 0;
    resultado = calcular();
    printf("\nO quadrado do numero digitado e %2f ", resultado);
    return 0;
}