#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    double dim1,dim2,area;
printf("Favor inserir a primeira dimens�o do terreno: ");
    scanf("%lf",&dim1);
    printf("Favor inserir a segunda dimens�o do terreno: ");
    scanf("%lf",&dim2);
    area=dim1*dim2;
    printf("A �rea total do tereno �: %.2lf",area);
}
