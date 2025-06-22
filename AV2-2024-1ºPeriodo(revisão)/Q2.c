#include<stdio.h>
float encontraMenor(int *numPessoas,float vListaValores[]){
    float menor = vListaValores[0];
    for (int i = 0; i < *numPessoas; i++){
        if(vListaValores[i] < menor){
            menor = vListaValores[i];
        }
    }
    return menor;
}
void exibeDifMenorRetornaSoma(float *menorValor,int *numPessoas,int vIdentificadores[], float vListaValores[]){
    float somaDif = 0;
    float diferenca = 0;       
    for (int i = 0; i < *numPessoas; i++){
        if(vListaValores[i] == *menorValor){
            printf("Inscricao: %d \nPossui o menor Salario.\n",vIdentificadores[i]);
        }
        else{
            diferenca = vListaValores[i] - *menorValor;
            printf("Inscricao: %d \nDiferenca de salario(comparado ao menor): %.2f\n",
                vIdentificadores[i],diferenca);
            somaDif += diferenca;
        }
    }
    printf("A soma das diferencas: %.2f\n", somaDif);
}
int main(){
    float menorSalario;
    int qtdFuncionarios = 4;
    int vInscricao[4] = {37,82,19,64};
    float vSalarios[4] = {2200,3000,1500,2200};

    menorSalario = encontraMenor(&qtdFuncionarios, vSalarios);
    exibeDifMenorRetornaSoma(&menorSalario,&qtdFuncionarios,vInscricao,vSalarios);

    return 0;
}
