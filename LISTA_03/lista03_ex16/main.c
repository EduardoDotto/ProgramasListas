#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 16
    int prato,nop1=0,nop2=0,nop3=0,nop4=0,nop5=0,nop6=0;
    float total;
    printf("=========================================================================\n");
    printf("LISTA DE PRODUTOS\n");
    printf("1 - PRESUNTO!\n2 - QUEIJO!\n3 - P�O!\n4 - HAMBURGER!\n5 - CERVEJA!\n\n6 - REFRIGERANTE!\n7 - FINALIZAR COMPRA!\n");
    printf("=========================================================================\n");
        while (prato!=7){
        scanf("%d",&prato);
        switch(prato){
            case 1:
            printf("VOC� ESCOLHEU PRESUNTO\n");
            printf("------------------------------------------------------------------\n");
            total+=2.00;
            nop1++;
            break;
            case 2:
            printf("VOC� ESCOLHEU QUEIJO\n");
            printf("------------------------------------------------------------------\n");
            total+=2.00;
            nop2++;
            break;
            case 3:
            printf("VOC� ESCOLHEU P�O\n");
            printf("------------------------------------------------------------------\n");
            total+=0.50;
            nop3++;
            break;
            case 4:
            printf("VOC� ESCOLHEU HAMBURGUER\n");
            printf("-------------------------------------------------------------------\n");
            total+=3.00;
            nop4++;
            break;
            case 5:
            printf("VOC� ESCOLHEU CERVEJA\n");
            printf("-------------------------------------------------------------------\n");
            total+=7.00;
            nop5++;
            break;
            case 6:
            printf("VOC� ESCOLHEU REFRIGERANTE\n");
            printf("-------------------------------------------------------------------\n");
            total+=6.00;
            nop6++;
            break;
        }
        }
     printf("=========================================================================\n");
     printf("SUA COMPRA FOI FINALIZADO!!!\n\nAGUARDE ENQUANTO CALCULAMOS O TOTAL!\n");
     printf("VOC� ESCOLHEU %d PRESUNTOS\n",nop1);
     printf("VOC� ESCOLHEU %d QUEIJOS\n",nop2);
     printf("VOC� ESCOLHEU %d P�ES\n",nop3);
     printf("VOC� ESCOLHEU %d HAMBURGUERS\n",nop4);
     printf("VOC� ESCOLHEU %d CERVEJAS\n",nop5);
     printf("VOC� ESCOLHEU %d REFRIGERANTES\n",nop6);
     printf("=========================================================================\n");
     printf("O TOTAL DA CONTA DEU R$ %.2f\n",total);
}
