#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Insira um numero e descubra se ele é impar ou par:\n");
    scanf("%d", &numero); 

    if(numero %2 == 0){
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}
