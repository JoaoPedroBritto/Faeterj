#include<stdio.h>

int main()
{
    int v1[4];
    int v2[4];
    int vResultante[4];

    printf("Multiplicação de vetores!\nInforme os valores respectivamente[sendo 4 para cada vetor].\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Informe os valores, [v1] num %d: \n", (i+1));
        scanf("%d",&v1[i]);
        printf("Informe os valores, [v2] num %d: \n", (i+1));
        scanf("%d",&v2[i]);
    }
    // Poderia exibir de uma vez? sim. Mas quis armazenar os valores.
    for (int i = 0; i < 4; i++)
    {
        vResultante[i] = v1[i] * v2[i];
        printf("%d\n",vResultante[i]);
    }
    
    

    return 0;
}
