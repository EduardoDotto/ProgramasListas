#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_12

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int X,Y,Z;
    printf("Favor informar o comprimento do lado X do tri�ngulo\n");
    scanf("%d",&X);
    printf("Favor informar o comprimento do lado Y do tri�ngulo\n");
    scanf("%d",&Y);
    printf("Favor informar o comprimento do lado Z do tri�ngulo\n");
    scanf("%d",&Z);
    if (X<(Y+Z) && Y<(X+Z) && Z<(X+Y)){
    printf("O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados\n");
        if ((X==Y) && (X==Z))
        printf("O triangulo � equil�tero\n");
        else if (X==Y || Y==Z || X==Z)
        printf("O triangulo � is�celes\n");
        else
        printf("O triangulo � escaleno\n");
    }
        else
        printf("N�o � possivel formar um triangulo\n");

}
