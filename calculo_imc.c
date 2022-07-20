#include<stdio.h>
float calcularImc(){
    float peso, altura, imc;

    printf("\ninforme seu peso em kg: ");
    scanf("%f", &peso);
    printf("\ninforme sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    return imc;
}
int main(){
    float imc = calcularImc();

    if (imc < 18.5) printf("\nIMC = %.2f, situacao: abaixo do peso!", imc);
    else if (imc < 24.9) printf("\nIMC = %.2f, situacao: peso ideal!", imc);
    else printf("\nIMC = %.2f, situacao: sobrepeso!", imc);
}
    
