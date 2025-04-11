#include <stdio.h>

int main() {
    int co, liM, liL;

    while(scanf("%d%d%d", &co, &liM, &liL)!=EOF){

       int mar[liM][co], leo[liL][co], linhaM, linhaL,atrib;

         for(int i=0; i<liM; i++){
            for(int j=0; j<co; j++){
               scanf("%d", &mar[i][j]);

            }
       }
       for(int i=0; i<liL; i++){
           for(int j=0; j<co; j++){
           scanf("%d", &leo[i][j]);

           }
       }
       scanf("%d%d%d", &linhaM,&linhaL, &atrib );

       if(mar[linhaM-1][atrib-1]>leo[linhaL-1][atrib-1]){
          printf("Marcos\n");
       }else if(mar[linhaM-1][atrib-1]<leo[linhaL-1][atrib-1]){
          printf("Leonardo\n");

       }else{
          printf("Empate\n");
       }

    }
    return 0;
}
