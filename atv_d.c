#include <stdio.h>
#include <stdlib.h>
/*Calcular a área de uma circunferência e mostrá-la. 
Fórmula: Area = pi * RAIO2. 
O valor do raio não poderá ser negativo ou zero.*/

int main(){
    int area, raio;

    printf("insira o valor do raio \n");
    scanf("%d", &raio);

    if(raio <= 0 ){
        printf("insira um valor que seja positivo ou não nulo");
    } else {
        area = 3.14 * (raio * raio);
        printf("A área é: %d\n", area);
    }

    return 0;
}