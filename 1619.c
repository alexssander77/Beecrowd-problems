#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // Incluir a biblioteca necessária para a função abs()

// Função para verificar se um ano é bissexto
bool eh_bissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

// Função para calcular o número de dias desde 1970-01-01 até uma data
int dias_desde_1970(int ano, int mes, int dia) {
    const int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_dias = 0;

    // Conta os anos completos desde 1970
    for (int i = 1970; i < ano; i++) {
        total_dias += eh_bissexto(i) ? 366 : 365;
    }

    // Conta os meses completos no ano atual
    for (int i = 1; i < mes; i++) {
        total_dias += dias_por_mes[i - 1];
        if (i == 2 && eh_bissexto(ano)) { // Fevereiro em ano bissexto
            total_dias++;
        }
    }

    // Adiciona os dias do mês atual
    total_dias += dia - 1;

    return total_dias;
}

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Consumir o caractere de nova linha após o número N

    while (N--) {
        // Leitura das duas datas
        int ano1, mes1, dia1;
        int ano2, mes2, dia2;
        scanf("%d-%d-%d %d-%d-%d", &ano1, &mes1, &dia1, &ano2, &mes2, &dia2);

        // Calcular número de dias desde 1970-01-01 para ambas as datas
        int dias1 = dias_desde_1970(ano1, mes1, dia1);
        int dias2 = dias_desde_1970(ano2, mes2, dia2);

        // Calcular diferença absoluta de dias entre as duas datas
        int diferenca_dias = abs(dias1 - dias2);

        // Imprimir resultado
        printf("%d\n", diferenca_dias);
    }

    return 0;
}
