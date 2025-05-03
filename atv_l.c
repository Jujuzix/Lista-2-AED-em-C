#include <stdio.h>
#include <stdlib.h>
/*
Determinar, dentre quatro números, a soma dos pares.
*/

int main(){
    int n1, n2, n3, n4;
    int soma = 0; //inicializando a variavel em zero.

    printf ("Insira o primeiro numero: \n");
    scanf ("%d", &n1);

    printf ("Insira o segundo numero: \n");
    scanf ("%d", &n2);

    printf ("Insira o terceiro numero: \n");
    scanf ("%d", &n3);

    printf ("Insira o quarto numero: \n");
    scanf ("%d", &n4);

    if (n1 % 2 == 0){
        soma += n1;
    }

    if (n2 % 2 == 0){
        soma += n2;
    }

    if (n3 % 2 == 0){
        soma += n3;
    }

    if (n4 % 2 == 0){
        soma += n4;
    }

    printf("A soma é: %d \n", soma);

    return 0;
}