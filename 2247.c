#include <stdio.h>

int main() {
    int N, i, j_valor, z_valor, total_j = 0, total_z = 0;
    int num_teste = 1;
    int continuar = 1;

    while (continuar) {
        scanf("%d", &N);
        if (N == 0)
            continuar = 0;
        else {
            printf("Teste %d\n", num_teste++);
        
            for (i = 0; i < N; i++) {
                scanf("%d %d", &j_valor, &z_valor);
                total_j += j_valor;
                total_z += z_valor;
                printf("%d\n", total_j - total_z);
            }

            printf("\n");
            total_j = 0;
            total_z = 0;
        }
    }

    return 0;
}
