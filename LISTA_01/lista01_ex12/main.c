#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_12
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario, newsalario,ofcnewsalario;
    printf("Favor inserir o salario: ");
    scanf("%f",&salario);
    newsalario=salario*1.15;
    ofcnewsalario=newsalario*0.92;
    printf("O salario inical � R$ %.2f, o salario com aumento � R$ %.2f e o salario final � R$ %.2f",salario,newsalario,ofcnewsalario);
}
