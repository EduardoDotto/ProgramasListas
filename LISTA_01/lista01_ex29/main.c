#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_29


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float preco, newpreco;
    printf("Favor informar o pre�o do produto\n");
    scanf("%f",&preco);
    newpreco=0.9*preco;
    printf("O pre�o velho �: %.2f e o novo pre�o �: %.2f \n",preco,newpreco);

}
