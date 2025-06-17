#define max 20
#include<string.h>
#include <ctype.h>
#include<stdio.h>

void mostrarLista(char vLista[][max],int tam){
    for (int i = 0 ; i < tam; i++){
        printf("%s ", vLista[i]);
    }
    printf("\n");
}
void listaInversa(char vLista[][max],int tam){
    for (int i = tam - 1; i >= 0; i--){
        printf("%s ", vLista[i]);
    }
}
void qtdNomesPorLetra(char vLista[][max],char tam,int letra){
    int qtdNomesLetra = 0;
    for (int i = 0; i < tam; i++){
        if (vLista[i][0] == letra || vLista[i][0] == toupper(letra)){
            qtdNomesLetra ++;
        }
    }
    printf("\nQuantidades de palavras com a letra '%c': %d\n",letra,qtdNomesLetra);
}
void alterarNome(char lista[][max], int tamanho, char nomeAntigo[], char nomeNovo[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(lista[i], nomeAntigo) == 0){
            strcpy(lista[i], nomeNovo);
            break; 
        }
    }
}
void unirNomes(char vlista1[][max], int tam,char vLista2[][max], char vResultante[][max]){
    for (int i = 0; i < tam; i++){
        strcpy(vResultante[i], vlista1[i]);
        strcat(vResultante[i], " ");
        strcat(vResultante[i], vLista2[i]);
    }
}
int main(){
    char vNomes[3][max] = {"Joao","Pedro","Maria"};
    char vSobreNome[3][max] = {"Britto","Araujo","joaquina"};
    char vNomeSobrenome[3][max*2];

    mostrarLista(vNomes,3);
    listaInversa(vNomes,3);
    qtdNomesPorLetra(vNomes,3,'j');
    alterarNome(vNomes,3,"Joao","Banana");
    mostrarLista(vNomes,3);
    unirNomes(vNomes,3,vSobreNome, vNomeSobrenome);
    mostrarLista(vNomeSobrenome,3);
 
    return 0;
}
