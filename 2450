#include <stdio.h>

int main() {
    int l, c;


    scanf("%d %d", &l, &c);

    int m[l][c], a[l];
    int b = -1;


    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }


    for (int i = 0; i < l; i++) {
        a[i] = -1;
    }


    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] != 0) {
                a[i] = j;
                break;
            }
        }

        if (a[i] == -1 && b == -1) {
            b = i;
        }
    }


    if (b != -1) {
        for (int i = b; i < l; i++) {
            if (a[i] != -1) {
                printf("N\n");
                return 0;
            }
        }
    }


    if (b == -1) {
        for (int i = 1; i < l; i++) {
            if (a[i] <= a[i - 1]) {
                printf("N\n");
                return 0;
            }
        }
    } else {
        for (int i = 1; i < b; i++) {
            if (a[i] <= a[i - 1]) {
                printf("N\n");
                return 0;
            }
        }
    }


    printf("S\n");
    return 0;
}
