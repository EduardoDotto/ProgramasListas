#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_36


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float minimo,renda,empregado;
    printf("Favor informar o valor do sal�rio m�nimo\n");
    scanf("%f",&minimo);
    printf("Favor informar o valor do salario do empregado\n");
    scanf("%f",&empregado);
    renda=empregado/minimo;
    printf("O sal�rio equivale a %.2f sal�rios minimos\n",renda);

}
