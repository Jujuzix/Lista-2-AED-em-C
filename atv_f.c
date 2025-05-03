#include <stdio.h>
#include <stdlib.h>
/*
Ler dois valores maiores que zero para as variáveis A e B, efetuar a troca dos conteúdos de
forma que a variável A passe a ter o conteúdo da variável B e vice-versa. 
Utilize 1 variáAUX para resolver.
*/
int main(){
    int valor1, valor2, aux;

    //inserção valor 1
    printf("insira um valor: \n");
    scanf("%d", &valor1);

    //inserção valor 2
    printf("insira o segundo valor: \n");
    scanf("%d", &valor2);

    //validação das duas entradas
    if (valor1 >0 && valor2 >0 ) {
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;

        printf("os valores %d %d", valor1, valor2);
    }

    //mensagem de erro
    if (valor1 <= 0 || valor2 <= 0) {
        printf("um dos valores estão errados");
    }

    return 0;
    
}