#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_30


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float total, salario,vendas;
    printf("Favor informar o sal�rio do funcion�rio\n");
    scanf("%f",&salario);
    printf("Favor informar o total em vendas\n");
    scanf("%f",&vendas);
    total=salario+0.04*vendas;
    printf("O valor do sal�rio de %.2f + comiss�o de vendas %.2f totaliza: %.2f \n",salario,vendas,total);

}
