#include<stdio.h>

int x = 10;

void testar(){
    x = 2 * x;
}

int main(){
    printf("\nvalor de x global = %d", x);
    testar();
    printf("\nvalor de x global alterado em testar() = %d", x);

    return 0;
}