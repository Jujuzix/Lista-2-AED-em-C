#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo que obtenha seis notas de um aluno através do teclado, calculando a
média. Devem ser impressos a média calculada e uma mensagem indicando se o aluno foi
aprovado ou reprovado. Lembre-se que um aluno só é aprovado quando este obtém uma
média maior ou igual a 7.0.
*/

int main(){
   float nota, soma = 0, media;
   int i;

   for (i = 0; i < 6; i++){
   do{
        printf("Digite a %dª nota (entre 0 e 10): ", i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
            printf("Nota inválida. Digite uma nota entre 0 e 10. \n");
        }
    } while (nota < 0 || nota > 10);
    
   soma += nota;
   }

   media = soma / 6;

   printf("\n Média final: %.2f \n", media);

   if (media >= 7){
        printf("Aluno Aprovado. \n");
   } else{
        printf("Aluno Reprovado. \n");
   }

   return 0;
}