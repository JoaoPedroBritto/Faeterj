#include<stdio.h>
int vetor_ordenado(float vetor[]){
    int maior=vetor[0];
    for (int i = 0; i < 5; i++)
    {
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        else if(vetor[i]==maior){
            
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main()
{
    int condicao=0;

    float vetor_real_1[5] = {1.1,2.2,3.3,5.5,4.4};
    float vetor_real_2[5] = {1.1,2.2,3.3,4.4,5.5};

    condicao = vetor_ordenado(vetor_real_1);
    printf("%d\n",condicao);
    condicao= vetor_ordenado(vetor_real_2);
    printf("%d", condicao);

    return 0;
}
