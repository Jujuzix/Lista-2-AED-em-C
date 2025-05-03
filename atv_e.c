#include <stdio.h>
#include <stdlib.h>
/*Calcular o valor do salário líquido de um programador, dado o número funções criadas, o
valor de cada função, o percentual de desconto do INSS é 8% sobre o salário bruto. Deverá
ser informado: o nome do funcionário, o salário bruto, o salário líquido. Validar os valores de
entrada.
*/

int main(){
    char nomeFuncionario[100];
    int numFuncoes;
    float sal_Liq, valorFuncao, salarioBruto, inss;

    printf("insira o nome do programador \n");
    fgets(nomeFuncionario, sizeof(nomeFuncionario), stdin);

    // validação de entrada
    do{
        printf("Insira a quantidade de funções criadas: \n");
        scanf("%d", &numFuncoes);

        if (numFuncoes < 0){
            printf("Número de funções devem ser maiores que 0. \n");
        }

    } while (numFuncoes < 0);

    do{
        printf("Insira o valor de cada função feita: \n");
        scanf("%f", &valorFuncao);

        if (valorFuncao < 0)
        {
            printf("O valor das funções devem ser maiores que 0. \n");
        }

    } while (valorFuncao < 0);

    // calculos
    salarioBruto = numFuncoes * valorFuncao;

    inss = salarioBruto * 0.08;

    sal_Liq = salarioBruto - inss;

    // saida
    printf("nome do funcionario: %s \n", nomeFuncionario);
    printf("Salario Bruto: %f \n", salarioBruto);
    printf("Salario Liquido: %f \n", sal_Liq);
}