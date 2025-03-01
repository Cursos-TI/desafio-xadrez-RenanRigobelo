#include <stdio.h>

int main() {

    int bispo = 1, torre = 1;
    int rainha = 1;

    //movimentação do bispo usando while
   
    printf("### Movimentação do bispo ###\n ");

    while (bispo <= 5)
    {
        printf("O bispo anda %d casa(s) na diagonal superior direita\n", bispo);
        bispo++;
    }

    //movimentação do torre usando do-while

    printf("### Movimentação da torre ###\n");

    do
    {
        printf("A torre anda %d casa(s) para a direita\n", torre);
        torre++;
    } while (torre <= 5);


    //movimentação da rainha usando for

    printf("### Movimentação da Rainha ### \n");

    for ( rainha = 0; rainha <= 8; rainha++)
    {
        printf("A rainha anda %d casa(s) para a esquerda. \n", rainha);
    }

    return 0;
}
