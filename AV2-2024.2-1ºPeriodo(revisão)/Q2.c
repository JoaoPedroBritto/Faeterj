#include<stdio.h>
#include<string.h>
#include<math.h>

void exibirBinario(int vArray[], int tam){
    for(int i=0; i < tam; i++){
        printf("(%d, pos[%d])\n",vArray[i],i);
    }
}
void converteBinarioDecimal(int vArray[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        if (vArray[i] == 1){
            soma += pow(2,(tam -1 -i));  
        }
    }
    printf("%d\n",soma);
}
void vResultanteXOR(int vArray1[], int vArray2[], int vArrayResultante[], int tam){
    for (int i = 0; i < tam; i++){
        if (vArray1[i] == vArray2[i]){
            vArrayResultante[i] = 0;
        }
        else{
            vArrayResultante[i] = 1;
        }
    }
    for (int i = 0; i < tam; i++){
        printf("(%d) ",vArrayResultante[i]);
    }
    printf("\n");
}

int main(){
    int vBinario[8] = {0,1,1,0,1,0,0,1};
    int teste1[4] = {1,0,0,1};
    int teste2[4] = {0,1,0,1};
    int teste3[4];

    exibirBinario(vBinario,8);
    converteBinarioDecimal(vBinario,8);
    vResultanteXOR(teste1,teste2,teste3,4);

    return 0;
}
