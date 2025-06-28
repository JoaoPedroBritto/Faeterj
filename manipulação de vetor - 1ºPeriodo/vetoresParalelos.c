#include<stdio.h>

void refeicoesCliente(int vCliente[],int vDias[], int vPagamentos[],int len){
    int i,j;
    int contadorCliente, totPago, promocoes,valorPromocional;

    for (i = 0; i < 10; i++){
        contadorCliente = 0;
        totPago = 0;
        valorPromocional = 0;
        for (j = 0; j < len; j++){
            if ( (i+1) == vCliente[j]){
                contadorCliente += 1;
                totPago += vPagamentos[j];
            } 
        }
        promocoes = contadorCliente / 3; 
        if (promocoes > 0){
            valorPromocional = totPago / contadorCliente;
        }

        printf("--> cliente %d\nApareceu %d vezes\nTotal Pago: %d\nPromocoes disponiveis: %d\nValor Promocional R$: %d\n",
            (i+1),contadorCliente,totPago,promocoes,valorPromocional);
    }
}

int main(){
 int vCli[35]={1,2,3,4,1,5,6,1,7,7,2,8,10,10,10,2,8,10,7,8,3,3,6,7,4,1,5,6,1,7,7,2,8,10,10};
 int vDia[35]={25,25,25,25,25,25,25,26,26,26,26,26,26,26,26,27,27,27,27,27,27,28,28,28,28,
 29,29,29,29,29,29,29,30,30,30};
 int vPg[35]={20,45,67,12,34,56,78,34,34,34,56,12,12,12,34,45,67,78,89,56,76,76,77,88,23,
23,23,12,12,44,45,43,45,34,55};

    refeicoesCliente(vCli,vDia,vPg,35);

    return 0;
}
