#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "function.c"

struct funcionario{
char nome[30];
char funcao[30];
int nreg;
float salario;
};

struct funcionario f1 = {"joao", "programador", 1642,3937.48};

main(){
    int a, b, c;
    float d;
    linha2('*',5);
    printf("digite dois valores\n");
    linha2('*',5);
    linha3("Digite o primeiro numero", '*');
    scanf("%d",&a);
    scanf("%d",&b);
    c = soma(a,b);

    printf("a soma e %d\n",c);
    oi();

    d = calcmedia(a,b);

    printf("a media  e %2.f\n",d);



}
