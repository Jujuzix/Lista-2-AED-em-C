#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira um número que esteja no intervalo entre 100 a 1000: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 1000){
        printf("o %d esta no intervalo", numero);
    }
    
    return 0;
}