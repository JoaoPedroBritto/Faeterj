#include<stdio.h>
int ehPar (num){
    if ((num % 2) == 0){
        return 0;
    }
    return 1;
}
void secaoAcesso(int tipo, int codigo, int tentativas){
    if (tentativas > 3){
        printf("Redirecionado a secao de seguranca !!!\n");
    }
    else if (tipo == 2){
        printf("Secao pesquisador\n");
    }
    else if ((((int)(codigo/100))% 2 == 0) && (ehPar(codigo)==1)){
        printf("Secao Literatura\n");
    }
    else if ((ehPar(codigo) == 0) && (((int)(codigo/100))% 2 == 1)){
        printf("Secao Ciencias\n");
    }
    else{
        printf("Secao Historia\n");
    }
}

int main()
{
    secaoAcesso(2,123,1);
    secaoAcesso(1,232,2);
    secaoAcesso(3,543,4);
    secaoAcesso(3,543,1);
    return 0;
}