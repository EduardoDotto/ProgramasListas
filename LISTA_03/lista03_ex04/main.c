#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_04
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,n;
    char frase [30];
    printf("Favor digitar o nome do Usuario\n");
    gets(frase);
    printf("Quantas vezes quer ver o nome do usu�rio\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     printf("O nome do usu�rio � %s - %d\n",frase,i);
}
