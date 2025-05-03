#include <stdio.h>
#include <stdlib.h>
/*
Dadas três medidas, informar a maior
*/
int main(){
    int medida1, medida2, medida3, maiorMedida;

    //entradas
    printf("insira a primeira medida: \n");
    scanf("%d", &medida1);

    printf("insira a segunda medida: \n");
    scanf("%d", &medida2);

    printf("insira a terceira medida: \n");
    scanf("%d", &medida3);

    maiorMedida = medida1;

    //validação
    if (medida2 > maiorMedida){
        maiorMedida = medida2;
    }

    if (medida3 > maiorMedida){
        maiorMedida = medida3;
    }
    
    printf("a maior medida é: %d", maiorMedida);

    return 0;
}