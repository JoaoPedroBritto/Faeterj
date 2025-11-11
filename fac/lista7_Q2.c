/*
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.
*/

#include<stdio.h>
float celsius_fahrenheite(int celsius){
    return ((9*celsius)/5) + 32;
}

int main()
{
    float celsius,fahrenheite;
    printf("Informe a temperatura em celsius: ");
    scanf("%f",&celsius);
    fahrenheite = celsius_fahrenheite(celsius);
    printf("%.2f celsius: %.2f fahrenheit.",celsius,fahrenheite);
    return 0;
}
