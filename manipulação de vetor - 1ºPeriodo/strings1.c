#define NumNomes 3 // numero de nomes
#include<stdio.h>
#include<string.h>
int main()
{
    char vNomesInverso[NumNomes][12]; // Vetor com 3 nomes com capacidade de 12 palavras cada nome
    char vNomesA[NumNomes][12];
    int qtdNomesA = 0;

    for (int i = 0; i < NumNomes; i++) {
        printf("Informe o nome: ");
        scanf("%11s", vNomesInverso[2 - i]); // Armazena na ordem inversa
    }
    printf("Ordem inversa\n");
    for (int i = 0; i < NumNomes; i++){
        printf("Nome Informado: %s\n", vNomesInverso[i]); //Exibe os nomes
    }
    for (int i = 0; i < NumNomes; i++) {   // Armazenar no vNomesA apenas os nomes que começam com 'A' ou 'a'
        if (vNomesInverso[i][0] == 'A' || vNomesInverso[i][0] == 'a') {
            strcpy(vNomesA[qtdNomesA], vNomesInverso[i]); // copia o da direita na esquerda
            qtdNomesA++;  // contador para mostrar a posição em que o nome com "A" vai ocupar no vetor
        }
    }
    return 0;
}
