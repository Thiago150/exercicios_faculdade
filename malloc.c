#include<stdio.h>
#include<stdlib.h>

int* alocar() {
    int *memoria = (int*) malloc(sizeof(int));
    return memoria;

}
int main(){
    int *num = alocar();
    if (num !=NULL){
        printf("\nInforme um numero inteiro: ");    
        scanf("%d", num);
        printf("\nnumero informado: %d", *num);
        }
        return 0;
}
    