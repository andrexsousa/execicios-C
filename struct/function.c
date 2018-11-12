oi()
{
    printf("Boa Noite! \n");
    printf("Curso de ADS. \n");
}

int soma(int x, int y)
{
    int s;
    s = x+ y;
    return s;
}

float calcmedia(float x, float y){
float m;
m = (x+y)/2;
return m;
}



void linha2(char c, int q){
    int i;
    for(i = 1;i <=q; i++)
    {
        putchar(c);
    }
    putchar('\n');
}

linha3(char frase[50], char c)
{

    int i, q;
    q = strlen(frase);
    printf("%s\n", frase);
    for(i=1;i<=q;i++)
    {
        putchar(c);
    }
    putchar('\n');
}
