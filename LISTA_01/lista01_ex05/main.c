#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_05
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float precogas, nlitros, colocar;
    printf("Favor inserir o pre�o da gasolina: ");
    scanf("%f",&precogas);
    printf("Favor inserir o valor desejado: ");
    scanf("%f",&colocar);
    nlitros=colocar/precogas;
    printf("VOC� ABASTECEU %.2f LITROS",nlitros);
}
