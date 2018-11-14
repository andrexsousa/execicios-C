#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "locale.h"
#include "string.h"

struct visitante
{
 char nome[50];
 char dataN[10];
 char sexo[1];
 char rg[12];
 char email[50];
 char convidado[1];
 char especial[1];
};

struct visitante visitante1;

main()
{
 setlocale(LC_ALL, "Portuguese");

 int op,opVis;

    while(op!=4)
    {
        printf("1-Visitante\n");
        printf("2-Realizar sorteio\n");
        printf("3-Enviar comunicado por email\n");
        printf("4-Sair\n\n");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            while(opVis!=6)
            {
                system("cls");
                printf("\n1-Incluir Visitante\n");
                printf("2-Excluir Visitante\n");
                printf("3-Listar Lugares Livres\n");
                printf("4-Listar lugares ocupados\n");
                printf("5-Mostrar Todos os Lugares\n");
                printf("6-Retornar ao menu inicial\n\n");
                scanf("%d", &opVis);
                switch(opVis)
                {
            case 1:

                printf("Informe seu nome: ");
                gets(visitante1.nome);
                printf("Informe sua Data de N: ");
                gets(visitante1.dataN);
                printf("Informe seu Sexo: ");
                gets(visitante1.sexo);
                printf("Informe seu RG: ");
                gets(visitante1.rg);
                printf("Informe seu e-mail: ");
                gets(visitante1.email);
                printf("Voce e convidado ? S/N ");
                gets(visitante1.convidado);
                printf("Necessita de lugar especial ? S/N ");
                gets(visitante1.especial);

                printf("\n\n\nnome: %s\n",visitante1.nome);
                printf("nascimento: %s\n",visitante1.dataN);
                printf("sexo: %s\n",visitante1.sexo);
                printf("RG: %s\n",visitante1.rg);
                printf("email: %s\n",visitante1.email);
                printf("convidado: %s\n",visitante1.convidado);
                printf("assento especial: %s\n",visitante1.especial);
                printf("Assento Revervado\n");
                getch();
                break;
            case 2:
                printf("Excluir visitante\n");
                break;
            case 3:
                printf("Lugares Livres\n");
                break;
            case 4:
                printf("Lugares Ocupados\n");
                break;
            case 5:
                printf("Todos os Lugares\n");
                break;
                getch();
            case 6:
                break;
            default:
                printf("Opção Inválida\n");
                break;
                }
            }
            break;
        case 2:
                printf("Realizar Sorteio\n");
                break;
            case 3:
                printf("Comunicado por e-mail\n");
                break;
            case 4:
                break;
            default:
                printf("Opção Inválida\n");
                break;
        }
    }
}



