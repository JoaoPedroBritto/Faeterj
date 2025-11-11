/*
QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.
*/

#include<stdio.h>
int Leitura_dados(){
    int n=1, maior=-1, quantidade=0, quantidade_maior = 1;
    while (n !=0)
    {
        printf("Informe um numero ou zero[0] para terminar: ");
        scanf("%d",& n);
        if (n>maior)
        {
            maior = n;
        }
        else if(n == maior){
            quantidade_maior++;
        }
        quantidade++;
    }    
    return ((quantidade-1)-quantidade_maior);
}

int main()
{
    int quantidade;
    quantidade = Leitura_dados();
    printf("%d",quantidade);
    return 0;
}
