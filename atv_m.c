#include <stdio.h>
#include <stdlib.h>
/*
 Obter, dentre cinco números, a média dos ímpares.
*/
int main(){
    int numero, soma = 0, contador = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite o %dº numero \n", i);
        scanf("%d", &numero);

        if (numero % 2 != 0){
            soma += numero;
            contador++;
        }
    }

    if (contador > 0){
        float media = (float)soma / contador;
        printf("A media dos numeros impares é: %.2f\n", media);
    } else {
        printf("Nenhum numero impar foi inserido. \n");
    }

    return 0;
}