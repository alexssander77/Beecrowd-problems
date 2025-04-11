#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int q[N+1][N+1], l[N+1], c[N+1], dp=0, ds=0, v[N*N+1], zero=0;


    for(int i=0; i<=N; i++) {
        c[i] = 0;
        l[i] = 0;
    }

    for(int i=0; i<=N*N; i++) {
        v[i] = 0;
    }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            scanf("%d", &q[i][j]);
            v[q[i][j]]++;
            l[i] += q[i][j];
            c[j] += q[i][j];

            if(i == j) {
                dp += q[i][j];
            }
            if(i + j == N + 1) {
                ds += q[i][j];
            }
        }
    }

    for(int i=1; i<=N; i++) {
        if(dp != l[i] || dp != c[i]) {
            printf("%d\n", zero);
            return 0;
        }
    }

    if(dp != ds) {
        printf("%d\n", zero);
        return 0;
    }

    for(int i=1; i<=N*N; i++) {
        if(v[i] != 1) {
            printf("%d\n", zero);
            return 0;
        }
    }

    printf("%d\n", dp);

    return 0;
}
