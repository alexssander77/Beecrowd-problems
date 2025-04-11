#include <stdio.h>

int main() {

    int n,cont=0;
    char a[100001];

    scanf("%d", &n);

    scanf("%s", a);

    for(int i=0; i<n; i++){
        if(a[i]=='a'){

            if(i==0){
                if(a[i+1]=='a'){
                cont++;
                }
            }else if(i==n-1){
                 if(a[i-1]=='a'){
                    cont++;
                 }
            }else{
                if(a[i+1]=='a' || a[i-1]=='a'){
                    cont++;
                }

            }


      }
    }
    printf("%d\n", cont);
    return 0;
}
