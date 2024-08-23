#include <stdio.h>

int main() {
    int n, inst = 0;
    scanf("%d", &n);
    for (int v = 0; v < n; v++) {
        inst++;

        int sud[9][9], somaL[9] = {0}, somaC[9] = {0}, conf = 0;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sud[i][j]);
            }
        }

        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                somaL[i] += sud[i][j];
                somaC[j] += sud[i][j];
            }
        }

       
        for (int i = 0; i < 9; i++) {
            if (somaL[i] != 45 || somaC[i] != 45) {
                printf("Instancia %d\n", inst);
                printf("NAO\n");
                conf = 1;
                break;
            }
        }

        
        if (!conf) {
           
            int somaSub = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    somaSub += sud[i][j];
                }
            }
            if (somaSub != 45) {
                printf("Instancia %d\n", inst);
                printf("NAO\n");
                conf = 1;
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[i][3 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

          
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[i][6 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[3 + i][j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[3 + i][3 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[3 + i][6 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[6 + i][j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

          
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[6 + i][3 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }

           
            if (!conf) {
                somaSub = 0;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        somaSub += sud[6 + i][6 + j];
                    }
                }
                if (somaSub != 45) {
                    printf("Instancia %d\n", inst);
                    printf("NAO\n");
                    conf = 1;
                }
            }
        }
        if(conf!=1){
            if (sud[0][0]==sud[0][1]) {
                        printf("Instancia %d\n", inst);
                        printf("NAO\n");
                        conf = 1;

            }
        }
        if (!conf) {
            printf("Instancia %d\n", inst);
            printf("SIM\n");
        }


            printf("\n");

    }

    return 0;
}
