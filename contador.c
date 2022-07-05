//Contador
#include <stdio.h>
#include <conio.h>
int main (void)
{
    int contador; //variavel de controle do loop

    for(contador = 1; 
        contador <=100000;
         contador++)
         {
            printf("%d", contador);
         }

         getch();
         return (0);
}
