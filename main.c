#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira um número qualquer: ");
    scanf("%d", &numero);
    
    if(numero > 10) {
    printf("o %d maior que 10", numero);
    }
    return 0;
}