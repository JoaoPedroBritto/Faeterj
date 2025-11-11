/*
QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

#include<stdio.h>
void multiplos_contidos_intervalo(int n,int a,int b){
    printf("Os mltiplos de %d contidos no intervalo [%d,%d]: ",n,a,b);
    for (int i = a; i <= b; i++)
    {
        if (i%n ==0)
        {
            printf("%d ",i);
        }   
    }
}

int main()
{
    int n,a=0,b=0;

    printf("Infomre o N: ");
    scanf("%d",&n);
    printf("Infomre o intervalo A: ");
    scanf("%d",&a);
    printf("Infomre o intervalo B: ");
    scanf("%d",&b);

    multiplos_contidos_intervalo(n,a,b);

    return 0;
}
