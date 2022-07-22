#include<stdio.h>

void testar(int* n1, int* n2){
    *n1 = -1; //o operador * permite acessar o valor de variáveis.
    *n2 = -2;
    printf("\n\n valores dentro da funcao testar(): ");
    printf("\n n1 = %d e n2 = %d", *n1, *n2);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nvalores antes de chamar a funcao testar (): ");
    printf("\n n1 = %d e n2 = %d", n1, n2);

    testar(&n1, &n2);

    printf("\nvalores depois da funcao testar: ");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    return 0;
}