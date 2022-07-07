#include <stdio.h>
int main() {
    float soma = 0;
    float valor;
    int opcao;
    do
    {
        printf ("\n\nMenu de opcao");
        printf("\n 1. Depositos");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n Informe uma opcao: ");
        scanf("%d", &opcao);
        //comandos
        switch (opcao)
        {
        case 1:
            printf("\n Informe o valor: ");
            scanf("%f", &valor);
            soma += valor;
            break;
        case 2:
            printf("\n Informe o valor: ");
            scanf("%f", &valor);
            soma -= valor;
            break;
        case 3:
            printf("\n Saldo atual = R$ %.2f", soma);
            break;
        case 4:
            printf("\n Saindo...");
            break;
        default:
            printf("\n Opção Invalida!");
            
        }
    } while (opcao != 0);
    printf("\n Fim das operações!");
    return 0;
}