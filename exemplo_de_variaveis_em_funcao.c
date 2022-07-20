#include<stdio.h>

int testar(){
    int x = 10;
    return x;
}
int main(){
    int x = 20;
    printf("\n valor de x na funcao main() = %d", x);
    printf("\n valor de x na funcao testa() = %d", testar());


    return 0;
}