#include<stdio.h>
float calculaPercentual(float num, float percent){
    percent = percent/100;
    if (percent < 0)
        {   
            return (num - (num*percent));
        }
        return (num + (num*percent));
}
float ajustaPreco(float num, float percent,int tipo){
    float diferenca;
    if (tipo == -1){
        percent = -percent; 
    }
    diferenca = calculaPercentual(num,percent) - percent;
    return diferenca;
}
void aplicaDoisAjustes(float num,float percent1, float percent2){
    float acrescimo,desconto;
    float desconto2,acrescimo2;
    float copia = num;

    acrescimo = ajustaPreco(copia, percent2,1);
    copia += acrescimo;
    desconto = ajustaPreco(copia, percent1, -1);
    copia -= desconto;
    printf("Valor primeiro acrescimo depois desconto : %.2f\n", copia);
    
    desconto2 = ajustaPreco(num, percent1, -1);
    num -= desconto2;
    acrescimo2 = ajustaPreco(num, percent2, 1);
    num += acrescimo2;
    printf("Valor primeiro desconto depois acrescimo : %.2f\n", num);
    
}


int main()
{
    float num,percent1,percent2;
    printf("Informe o valor base(num): \n");
    scanf("%f", &num);
    printf("Informe o percentual a diminuir(-): \n");
    scanf("%f", &percent2);
    printf("Informe o percentual a somar: \n");
    scanf("%f", &percent1);

    aplicaDoisAjustes(num,percent1,percent2);
    return 0;
}