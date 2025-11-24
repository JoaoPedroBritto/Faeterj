#include<stdio.h>
void alterar_ordem_vetor(int vetor[],int tamanho){
    int valor_auxiliar;
    for (int i = 0; i < tamanho; i+=2)
    {  
        valor_auxiliar = vetor[i+1];
        vetor[i+1] = vetor[i];
        vetor[i] = valor_auxiliar;
    }
}

int main()
{
    int tamanho; 
    printf("Informe o tamanho[par] do vetor: ");
    scanf("%d", &tamanho);
    while (tamanho%2!=0)
    {
        printf("Erro, Informe o tamanho[par] do vetor: ");
        scanf("%d", &tamanho);
    }

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o %d valor: ",i+1);
        scanf("%d",&vetor[i]);
    }

    alterar_ordem_vetor(vetor,tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf(" [%d]",vetor[i]);
    }
    
    return 0;
}
