#include <stdio.h>
int main() {
    int qtde_notas = 0, opcao;
    float nota, media, soma_nota = 0.0;
    do
    {
        printf("\nDigite a nota do aluno %d: ", qtde_notas + 1);
        scanf("%f", &qtde_notas);
        qtde_notas += 1;
        soma_nota += nota;
        printf("\nDigite 1 para informar outra nota ou 2 para encerrar: ");
        scanf("%d", &opcao);

    } while (opcao != 2);

        printf("\n\nQuantidade de alunos = %d", qtde_notas);
        media = soma_nota / (float) qtde_notas;
        printf("\nMedia das notas = %2.f", media);
        return 0;
    
}