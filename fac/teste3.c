/*
Desenvolver um programa que exiba os
números de 1 a n, exceto aqueles que
possuem múltiplos no intervalo [a,b].
*/

#include <stdio.h>

int main() {
    int n, a, b;
    int entrada_valida = 1; // Usamos 1 para 'true'

    printf("Digite o número final (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada inválida para 'n'. Deve ser um número positivo.\n");
        entrada_valida = 0; // Usamos 0 para 'false'
    }

    if (entrada_valida == 1) {
        printf("Digite o início do intervalo (a): ");
        if (scanf("%d", &a) != 1 || a <= 0) {
            printf("Entrada inválida para 'a'. Deve ser um número positivo.\n");
            entrada_valida = 0;
        }
    }

    if (entrada_valida == 1) {
        printf("Digite o fim do intervalo (b): ");
        if (scanf("%d", &b) != 1 || b < a) {
            printf("Entrada inválida para 'b'. Deve ser maior ou igual a 'a'.\n");
            entrada_valida = 0;
        }
    }

    if (entrada_valida == 1) {
        printf("\nExibindo números de 1 a %d, exceto aqueles com múltiplos em [%d, %d]:\n", n, a, b);

        for (int i = 1; i <= n; i++) {
            
            int primeiro_multiplo_no_intervalo;

            if (a % i == 0) {
                primeiro_multiplo_no_intervalo = a;
            } else {
                primeiro_multiplo_no_intervalo = ((a / i) + 1) * i;
            }
            
            if (primeiro_multiplo_no_intervalo <= b) {
                continue;
            } else {
                printf("%d ", i);
            }
        }

        printf("\n");
        return 0; 
    } else {
        return 1;
    }
}