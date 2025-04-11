#include <stdio.h>

int main() {

    int v[8],c=0;
    for(int i=0;i<8;i++){

    scanf("%d", &v[i]);
    if(v[i]==9){
        c=1;
    }
    }
    if(c==1){
        printf("F\n");
    }else{
    printf("S\n");
    }

    return 0;
}
