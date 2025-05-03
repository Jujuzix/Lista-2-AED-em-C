#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, calcular seu peso ideal,
utilizando as seguintes fórmulas:
    - para homens: (72,7 * H) - 58 ;
    - para mulheres: (62,1 * H) - 44,7.
*/

int main(){
    char sexo;
    float altura, pesoIdeal;

    printf("Insira a sua altura: \n");
    scanf("%f", &altura);

    if (altura <= 0)
    {
        printf("Altura deve ser um número maior e diferente de zero.");
    }

    getchar(); 

    printf("Insira o seu sexo: F(feminino) ou M(masculino) \n");
    scanf("%c", &sexo);

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso ideal para homem: %.2f kg\n", pesoIdeal);
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulher: %.2f kg\n", pesoIdeal);
    } else {
        printf("Valor inválido, tente novamente. Somente com F ou M.\n");
    }
    
     return 0;
    }
    
   
