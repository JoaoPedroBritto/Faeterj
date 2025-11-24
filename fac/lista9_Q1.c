#include<stdio.h>

int incidencia_vetor(int vetor_A[], int valor, int tamanho){
    int quantidade=0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor_A[i] == valor)
        {
            quantidade++;
        }
    }
    return quantidade;
}

int main()
{
    int tamanho=0;
    int vetor_A[tamanho];
    int valor=0,quantidade=0;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%d",&tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o valor %d : ",i+1);
        scanf("%d", & vetor_A[i]);
    }
    printf("Informe um valor para contar sua quantidade de ocorrencias: ");
    scanf("%d", & valor);

    quantidade = incidencia_vetor(vetor_A, valor, tamanho);

    printf("O valor %d incidiu no vetor %d vezes.",valor, quantidade);
    
    return 0;
}
