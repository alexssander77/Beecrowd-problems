#include<stdio.h>


int main(){
   int n,q,maior,cont;
   scanf("%d %d", &n, &q);
   while(n!=0 || q!=0){
        cont++;
        maior=0;
        int aer[n+1],a=0,b=0;
         for( int i=1; i<=n; i++){
            aer[i]=0;
         }

        for(int i=0; i<q; i++){
            scanf("%d %d", &a,&b);
            aer[a]=aer[a]+1;
            aer[b]=aer[b]+1;

        }
         for( int i=1; i<=n; i++){

          if(maior<aer[i]){
           maior=aer[i];
          }
         }

          printf("Teste %d\n", cont);
          for( int i=1; i<=n; i++){
             if(aer[i]==maior){
                printf("%d ", i);
             }

           }
           printf("\n\n");

           scanf("%d %d", &n, &q);
         }


return 0;
}
