#include <stdio.h>

int main() {

    int l, c;

    scanf("%d %d", &c, &l);

    int col[c],a,m=-1;

    for(int j=0; j<c; j++){
        col[j]=0;

    }

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a);
            col[j]+=a;
        }
    }



    for(int j=0; j<c; j++){

        if(m<col[j]){
           m=col[j];
        }

    }
    for(int j=c-1;j>=0;j--){
        if(col[j]==m){
           printf("%d\n", j+1);
           return 0;

        }


    }

    return 0;
}
