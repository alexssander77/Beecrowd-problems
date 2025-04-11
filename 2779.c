#include <stdio.h>

int main() {

    int t, n, c, cont=0;

    scanf("%d", &t);
    int a[t];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
       scanf("%d", &c);
       a[c-1]=1;

    }
    for(int j=0; j<t; j++){
       if(a[j]==1){
        cont=cont+1;
       }


    }

    printf("%d\n", t-cont);

    return 0;
}
