#include<stdio.h>

int x = 10;

int main(){
    int x = -1;
    int b;

{
    extern int x;
    b = x;
}
printf("\nvalor de x = %d", x);
printf("\nvalor de b (x global) = %d", b);

return 0;

}