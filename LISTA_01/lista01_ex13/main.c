#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_13
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, cen, dez, unid;
    printf("Favor inserir o um numero com at� 3 algarismo: ");
    scanf("%d",&num);
    cen=((num)/100)*100;
    dez=((num-cen)/10)*10;
    unid=num-dez-cen;
    printf("A centena � R$ %d, a dezena � R$ %d e a unudade � R$ %d",cen,dez,unid);
}
