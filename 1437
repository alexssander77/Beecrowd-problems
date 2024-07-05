#include <stdio.h>


char calcularNovaDirecao(char direcaoInicial, char comando) {
    if (direcaoInicial == 'N') {
        if (comando == 'E')
            return 'O';
        else 
            return 'L';
    } else if (direcaoInicial == 'L') {
        if (comando == 'E')
            return 'N';
        else 
            return 'S';
    } else if (direcaoInicial == 'S') {
        if (comando == 'E')
            return 'L';
        else 
            return 'O';
    } else { 
        if (comando == 'E')
            return 'S';
        else 
            return 'N';
    }
}

int main() {
    int N;
    int continuar = 1;

    while (continuar) {
        scanf("%d", &N);

        if (N == 0)
            continuar = 0;
        else {
            char comandos[N];
            scanf("%s", comandos);

            char direcao = 'N'; 

            
            for (int i = 0; i < N; i++) {
                direcao = calcularNovaDirecao(direcao, comandos[i]);
            }

            printf("%c\n", direcao); 
        }
    }

    return 0;
}
