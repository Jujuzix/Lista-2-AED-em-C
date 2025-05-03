#include <stdio.h>
#include <stdlib.h>
/*
Determinar se um aluno está ou não aprovado, conhecidas as notas dos quatro bimestres,
sendo a média de aprovação igual a 6,0.
*/
int main(){
    float nota1, nota2, nota3, nota4, media;

    //valores de entrada
    printf("Insira a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Insira a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Insira a sua terceira nota: \n");
    scanf("%f", &nota3);

    printf("Insira a sua quarta nota: \n");
    scanf("%f", &nota4);

    //construção da media
    media = (nota1 + nota2 + nota3 + nota4)/4;

    //validação da aprovação
        if (media >= 6){
            printf(" aluno aprovado com a nota: %f \n", media);
        }
        
        if (media < 6)
        {
            printf(" aluno está reprovado com media: %f \n", media);
        }
        
        return 0;
}