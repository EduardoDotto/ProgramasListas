#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_11

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int nivel;
    float horas,sal;
    printf("Favor informar o n�vel do professor\n");
    printf("Professor N�vel 1 R$12,00 por hora/aula.\nProfessor N�vel 2 R$17,00 por hora/aula\nProfessor N�vel 3 R$25,00 por hora/aula\n");
    scanf("%d",&nivel);
    printf("Favor informar o numero de horas aula\n");
    scanf("%f",&horas);
    sal=horas*4.5;
     if ((nivel==1))
        printf("O valor do sal�rio � R$%.2f\n",sal*12);
        else if (nivel==2)
        printf("O valor do sal�rio � R$%.2f\n",sal*17);
        else if (nivel==3)
       printf("O valor do sal�rio � R$%.2f\n",sal*25);
}
