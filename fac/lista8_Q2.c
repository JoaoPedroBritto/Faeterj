/*
QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.
*/

#include<stdio.h>
int potencias_intervalo(int a,int b){
    int quantidade=0, potencia =2;
    while (potencia <= b)
    {
        if (potencia>=a)
        {
            quantidade++;
        }
        potencia *= 2;
    }
    return quantidade;
}
int main()
{
    int a,b,quantidade=0;
    printf("Informe A: ");
    scanf("%d",& a);
    printf("Informe B: ");
    scanf("%d",& b);
    quantidade = potencias_intervalo(a,b);
    printf("O Intervalo [%d,%d] possui %d potencias de 2.",a,b,quantidade);
    return 0;
}
