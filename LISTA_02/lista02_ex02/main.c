#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_02

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Favor informar o valor para verifica��o:\n");
    scanf("%d",&numero);

        if ((numero % 2 ==0 ))
        printf("O numero %d � PAR \n",numero);
        else if((numero % 2 ==1 ))
       printf("O numero %d � IMPAR \n",numero);

}

