#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int op, mesas[10],status[10], i, nmesa, encontrou;

    for(i=0; i<10; i++)
    {
        status[i] = 0;
        mesas[i] = i+1;
    }

    op=1;
    while(op != 7)
    {
        system("cls");
        printf("UNIP - Bistro\n");
        printf("==========\n\n");
        printf("1 - Reservar mesa\n");
        printf("2 - Liberar mesa\n");
        printf("3 - Alocar cliente\n");
        printf("4 - Listar mesas ocupadas\n");
        printf("5 - Listar mesas livres\n");
        printf("6 - Listar todas as mesas\n");
        printf("7 - Sair \n");
        printf("Escolha sua opcao");
        scanf("%d", &op);

        switch(op)
        {
        case 1:

            system("cls");
            printf("Informe o numero da mesa que deseja reservar: ");
            scanf("%d", &nmesa);
            if(status[nmesa-1]==1)
            {
                printf("mesa ja reservada. verifique outra opcao.");
                getch();
            }
            else
            {
                for(i=0;i<10;i++)

            if(nmesa == mesas[i])
            {
                status[i] = 1;
                printf("reserva realizada com sucesso!");
            }
        }

    break;
    case 2:
        system("cls");
        printf("informe o numero da mesa que deseja liberar:");
        scanf("%d", &nmesa);
        if(status[nmesa-1]==0)
        {
            printf("Esta mesa ja esta livre. Verifique outra opcao");
            getch();
        }
        else
        {
            for(i=0;i<10;i++)
            {
                if(nmesa == mesas[i])
                {
                    status[i] = 0;
                    printf("Liberacao realizada com sucesso!");
                    getch();
                }
            }
        }
        break;

        case 3:

            i = 0;
            encontrou = 0;
            while(i<10)
            {
                if(status[i] == 0)
                {
                    status[i] = 1;
                    printf("O cliente foi alocado na mesa: %d,", mesas[i]);
                    getch();
                    i = 10;
                    encontrou = 1;
                }
                i++;
            }
            if(encontrou==0)
            {
                printf("Nao existe mesa disponivel!");
                getch();
            }
            break;
        case 4:

            system("cls");
            printf("Mesas ocupadas\n");
            printf("===========\n\n");
            printf("Mesa Status\n\n");
            encontrou = 0;
            for(i=0;i<10;i++)
            {
                if(status[i]==1)
                {
                    printf("%d      Ocupada\n", mesas[i]);
                    encontrou = 1;
                }
            }
            if(encontrou==0)
            {
                printf("Todas as mesas estao Livres");
            }
            getch();
            break;
            case 5:

                printf("Mesas livres \n");
                printf("============ \n");
                printf("Mesa Status \n\n");
                encontrou = 0;
                for(i=0;i<10;i++)
                {
                    if(status[i]==0)
                    {
                        printf(" %d    Livre\n", mesas[i]);
                        encontrou = 1;
                    }
                }
                if(encontrou==0)
                {
                    printf("Todas as mesas estao Ocupadas");
                }
                getch();
                break;
        case 6:

            system("cls");
            printf("Todas as Meses\n");
            printf("=========\n\n");
            printf("Mesa Status\n\n");
            encontrou = 0 ;
            for(i=0; i<10; i++)
            {
                if(status[i]==1)
                {
                    printf(" %d Ocupada\n", mesas[i]);
                }
                else
                {
                    printf(" %d Livre \n", mesas[i]);
                }
            }
            getch();
            break;
            case 7:
                break;
                default:
                    printf("Opcao invalida!");
                    getch();
                    break;
    }
}
}

