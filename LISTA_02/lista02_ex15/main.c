#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_15

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cargo;
    float salario, newsalario;
    printf("Favor informar o cargo!\n");
    printf("101 - GERENTE!\n102 - ENGENHEIRO!\n103 - TECNICO!\n");
    scanf("%d",&cargo);
    printf("Favor informar o salario!\n");
    scanf("%f",&salario);
    if (cargo==101 || cargo==102 || cargo==103){
        switch(cargo){
            case 101:
            printf("VOC� � GERENTE\n");
            newsalario=salario*1.1;
            break;
            case 102:
            printf("VOC� � ENGENHEIRO\n");
            newsalario=salario*1.2;
            break;
            case 103:
            printf("VOC� � T�CNICO\n");
            newsalario=salario*1.3;
            break;   } }
        else {
            printf("VOC� � UM FUNC. DE SORTE\n");
            newsalario=salario*1.4;
        }

     printf("O sal�rio velho � R$ %.2f!\nO sal�rio novo � R$ %.2f!\nO aumento � de R$ %.2f!",salario, newsalario,newsalario-salario);


}
