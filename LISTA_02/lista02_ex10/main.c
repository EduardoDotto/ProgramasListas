#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_10

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int dif,n1,n2;
    printf("Favor informar o valor 1\n");
    scanf("%d",&n1);
    printf("Favor informar o valor 2\n");
    scanf("%d",&n2);
    dif=abs(n1-n2);
    printf("A diferen�a entre os valores � de %d\n",dif);

}
