/*
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

#include<stdio.h>

int n_termo_fibonacci(int n){
    int primeiro_termo=1, segundo_termo=1, n_termo;
    if (n<3)
    {
        return 1;
    }
    for (int i = 3; i <= n; i++)
    {   
        n_termo = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = n_termo;
        if (primeiro_termo == segundo_termo)
        {
            segundo_termo = 2;
        }
    }
    return n_termo;
}

int main()
{
    int n,n_termo;
    printf("o N esimo termo da seguencia de fibonacci: ");
    scanf("%d",&n);

    n_termo = n_termo_fibonacci(n);
    printf("%d termo: %d",n,n_termo);
    return 0;
}
