#include <stdio.h>
int main() {
    //Matriz inicial
    int mat [3] [5] = {
        1,1,1,0,-1,
        1,1,1,1,1,
        0,0,-1,-1,-1
    };

    int opcao;
    int numVoo;
    int reserva;

    do
        {
         printf("\n1 - Reserva voo\n2 - Sair\nInforme a opcao desejada: ");
         scanf("%d", &opcao);
         switch (opcao) 
         {
         case 1:
         printf("Informe o numero do voo (1-3): ");
         scanf("%d", &numVoo);
         reservou = 0;
         if (numVoo >=1 && numVoo <=3) {
            if (mat[numVoo - 1] [1] == 0) {
                reservou = 1;
                mat[numVoo - 1][1] = 1;
            }
         }
            if (reservou == 1) printf ("\nSeu voo foi reservado com sucesso!");
            else printf ("\nNao ha poltrona disponivel nesse voo!");
         }  else {
            printf("opcao invalida");
         } 
         break;
         case 2:
         printf ("\nSaindo....");
         break;
         default: printf("opcao invalida!");
    } 
  while (opcao !=2);
  return 0;  
} 
