#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Determinar as raízes reais de uma equação do 2º grau (Ax2+Bx+C=0).
coeficientes: ax^2 + bx + c = a, b, c
raizes: delta, x1 e x2
*/

int main(){
    float a, b, c;
    float delta, x1, x2;

    //valores de entrada
do
{
    printf("Digite um valor para o coeficiente a: \n");
    scanf("%f", &a);

    if (a == 0)
    {
        printf("o valor do coeficiente a não pode ser um valor nulo.");
    }
} while (a == 0);

printf("Digite um valor para o coeficiente b: \n");
scanf("%f", &b);

printf("Digite um valor para o coeficiente c: \n");
scanf("%f", &c);

delta = (b * b) - 4 * a * c;

//validação do delta
if (delta < 0 )
{
    printf("a equação não possui valores reais. \n");
} else if (delta == 0 ){
        x1 = -b / (2 * a);
        printf("a equação tem uma raiz real: x= %2.f \n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 =  (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui as duas raízes reais: \n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}