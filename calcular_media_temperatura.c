#include<stdio.h>

float t1, t2;

float calcularMedia(){
    return (t1+t2)/2;
}

int main(){
    printf("\ndigite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("\na temperatura e %.2f", calcularMedia());

    return 0;
}