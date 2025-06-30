//JoãoPedroDeBrittoAraújo
#include<stdio.h>

void exibeProdutos(int vCod[], int vEstoque[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Codigo: %d e Estoque: %d\n", vCod[i], vEstoque[i]);
    }
}
void lerPercentuais(float percentuais[],int tamanho, float minimo, float maximo){
    for (int i = 0; i < 10; i++){
        printf("Informe o percentual %d:\n", (i+1)); 
        scanf("%f",& percentuais[i]);
        while ((percentuais[i] < minimo) || (percentuais[i] > maximo)){
            printf("Percentual invalido !!!\n Informe o percentual %d:\n", (i+1)); 
            scanf("%f",& percentuais[i]);
        }  
    }
}
void calculaLimitesDinamicos(int codigo,float *min, float *max){
    float margem = 0.1 + ((codigo % 100)) * 0.2;
    *min = 0.01-margem;
    *max = 0.01+margem; 
}
int calcularAlteracao(int codigo,int *quantidade, float percentuais[]){
    float min,max;
    int digitoFinal = codigo%10;
    calculaLimitesDinamicos(codigo, &min, &max);
    if((percentuais[digitoFinal] >= min) || (percentuais[digitoFinal] <= max)){
        *quantidade = *quantidade + *quantidade*percentuais[digitoFinal];
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float percentuais[10]; 
    int vcodigos[5] = {2374, 1259, 9860, 4123, 3051};
    int vquantidades[5] = {100, 150, 200, 80, 50};
    int tamanho = 10;
       
    lerPercentuais(percentuais, tamanho, -0.10, 0.15);
    exibeProdutos(vcodigos, vquantidades, tamanho);
    for(int pos = 0; pos < 5; pos++) {
        calcularAlteracao(vcodigos[pos], &vquantidades[pos], percentuais);
    }
    return 0;
}