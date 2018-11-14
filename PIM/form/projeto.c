#include <stdio.h>

void main()
{
    FILE *fptr;
    char nome[20];
    int idade;
    char sexo[1];


    /*  open for writing */
    fptr = fopen("emp.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Digite seu nome \n");
    scanf("%s", &nome);
    fprintf(fptr, "Nome    = %s\n", nome);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    fprintf(fptr, "Idade     = %d\n", idade);
    printf("Sexo M/F\n");
    scanf("%s", &sexo);
    fprintf(fptr, "Sexo  = %s\n", sexo);
    fclose(fptr);
}
