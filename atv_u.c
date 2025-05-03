#include <stdio.h>
#include <stdlib.h>
/*
O cardápio de uma lancheria é o seguinte:
    especificação:      Código      Preço
    Cachorro quente     100         1.20
    Bauru simples       101         1.30
    Bauru com ovo       102         1.50
    Hambúrger           103         1.20
    Cheeseburguer       104         1.30
    Refrigerante        105         1.00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a
ser pago por aquele lanche e mostre o nome do lanche e o valor a ser pago. Considere
que a cada execução somente será calculado um item.
*/

int main(){
    int codigo, quantidade;
    float preco, total;
    char nomeItem[60];

    printf("Digite o código do item: \n");
    scanf("%d", &codigo);

    printf("Digite a quantidade do item: \n");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        preco = 1.20;
        sprintf(nomeItem, "Cachorro quente");
        break;
    case 101:
        preco = 1.30;
        sprintf(nomeItem, "Bauru simples");
        break;
    case 102:
        preco = 1.50;
        sprintf(nomeItem, "Bauru com ovo");
        break;
    case 103:
        preco = 1.20;
        sprintf(nomeItem, "Hambúrguer");
        break;
    case 104:
        preco = 1.30;
        sprintf(nomeItem, "Cheeseburguer");
        break;
    case 105:
        preco = 1.00;
        sprintf(nomeItem, "Refrigerante");
        break;
    default:
        printf("Código inválido. \n");
        return 1;
    }

    total = preco * quantidade;

    printf("Item: %s\n", nomeItem);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}