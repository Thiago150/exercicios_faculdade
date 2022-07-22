#include<stdio.h>

void inserir(int a[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\ndigite o valore %d: ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\nnumero[%d] = %d",1, 2 * b[i]);
    }
}

int main(){
    int numeros[3];
    printf("\npreenchendo o vetor... \n ");
    inserir(numeros);
    printf("\n\n dobro dos valores informados: ");
    imprimir(numeros);

    return 0;
}