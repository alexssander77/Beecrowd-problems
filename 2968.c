#include <stdio.h>

int main() {
    int n, f;

    scanf("%d", &n);

    for(int j=0;j<n;j++){

    scanf("%d", &f);
    long long int v[f+1];

    if(f==0){
        printf("Fib(0) = 0\n");
    }else if(f==1){
        printf("Fib(1) = 1\n");
    }else{
     v[0]=0;
     v[1]=1;
        for(int i=2;i<=f;i++){
        v[i]=v[i-1]+v[i-2];

        }
     printf("Fib(%d) = %lld\n", f, v[f]);
    }
    }

    return 0;
}
