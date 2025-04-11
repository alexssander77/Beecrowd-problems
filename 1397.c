#include <stdio.h>

void calcularPontuacaoPartida(int rodadas, int jogadas[][2]) {
    int pontos_og = 0, pontos_filho = 0;
    
    for (int i = 0; i < rodadas; i++) {
        if (jogadas[i][0] > jogadas[i][1]) {
            pontos_og++;
        } else if (jogadas[i][0] < jogadas[i][1]) {
            pontos_filho++;
        }
    }
    
    printf("%d %d\n", pontos_og, pontos_filho);
}

int main() {
    int rodadas;
    
    while (1) {
        scanf("%d", &rodadas);
        
        if (rodadas == 0) {
            return 0;
        }
        
        int jogadas[rodadas][2];
        for (int i = 0; i < rodadas; i++) {
            scanf("%d %d", &jogadas[i][0], &jogadas[i][1]);
        }
        
        calcularPontuacaoPartida(rodadas, jogadas);
    }
}
