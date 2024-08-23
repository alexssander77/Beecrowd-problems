#include <stdio.h>

int main() {
    int L, C;
    while(scanf("%d %d", &L, &C)!=EOF){
         int p[L][C];
         for(int i=0; i<L;i++){
             for(int j=0; j<C; j++){

              scanf("%d", &p[i][j]);
              if(p[i][j]==1){
                p[i][j]=9;
              }
             }

         }
         for(int i=0; i<L;i++){
             for(int j=0; j<C; j++){
                if(p[i][j]!=9){

                   if(i>0 && p[i-1][j]==9){
                    p[i][j]++;
                   }

                  if(i<L-1 && p[i+1][j]==9){
                    p[i][j]++;
                   }

                   if(j>0 && p[i][j-1]==9){
                    p[i][j]++;
                   }

                   if(j<C-1 && p[i][j+1]==9){
                    p[i][j]++;
                   }


                }

             }
         }
          for(int i=0; i<L;i++){
             for(int j=0; j<C; j++){

              printf("%d", p[i][j]);
             }
          printf("\n");
         }




    }


    return 0;
}
