#include "stdio.h"
#include "conio.h"

main()
{
    int x, y;
    int *px;
    px = &x;
    x = 10;

    printf("Para onde o ponteiro aponta: %d\n", px);
    printf("Conteudo do ponteiro.......:\n", *px);
    printf("Endereco do ponteiro.......:\n", &px);
    getch();
    printf("Conteudo de X: %d\n", x);
    printf("Endereco de X", &x);
    getch();
    *px = 50;
    system("cls");
    printf("Para onde o ponteiro aponta: %d\n", px);
    printf("Conteudo do ponteiro.......:\n", *px);
    printf("Endereco do ponteiro.......:\n", &px);
    getch();
   printf("Conteudo de X: %d\n", x);
    printf("Endereco de X", &x);
    getch();
}
