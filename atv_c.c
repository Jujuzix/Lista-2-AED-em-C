#include <stdio.h>
#include <stdlib.h>
/*
    intervaloA: 0 a 20
    intervaloB: -5 a -1
    intervaloC: 21 a 60
    intervaloD: -100 a 15
*/

int main()
{
    int  numero;

    printf("Insira um numero \n");
    scanf("%d", &numero);

    //intervalo a
    if(numero >=0 && numero <= 20){
        printf(" %d esta no intervalo A \n", numero);
    }

    if(numero >= -5 && numero <= -1){
        printf("%d esta no intervalo B \n", numero);
    }

    if(numero >= 21 && numero <=60){
        printf("%d esta no intervalo C \n", numero);
    }

    if(numero >= -100 && numero <= 15){
        printf("%d esta no intervalo D \n", numero);
    }

    return 0;
}