#include <stdio.h>

int main() {

    int bispo, torre = 1;
    int rainha = 1;

   
    printf("### Movimentação do bispo ###\n ");

    while (bispo <= 5)
    {
        printf("O bispo anda %d casas na diagonal superior direita\n", bispo);
        bispo++;
    }

    printf("### Movimentação da torre ###\n");

    do
    {
        printf("A torre anda %d casas para a direita\n", torre);
        torre++;
    } while (torre <= 5);


    printf("### Movimentação da Rainha ### \n");

    for ( rainha = 0; rainha <= 8; rainha++);
    {
        printf("A rainha anda %d casas para a esquerda. \n", rainha);
    }

    return 0;
}
