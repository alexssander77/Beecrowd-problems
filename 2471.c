#include <stdio.h>

int main() {

     int t;

     scanf("%d", &t);

     int q[t][t], l[t], c[t], s, le, ce, se, dsoma ;

     for(int i=0; i<t; i++){
         l[i]=0;
         c[i]=0;
     }
     for(int i=0; i<t; i++){
         for(int j=0; j<t; j++){
             scanf("%d", &q[i][j]);
             l[i]+=q[i][j];
             c[j]+=q[i][j];
         }
     }
     if(l[0]==l[1]){

        s=l[0];

     }else{

        s=l[2];

     }
     for(int i=0; i<t; i++){
        if(l[i]!=s){
           le=i;
           se=l[i];
        }
        if(c[i]!=s){
            ce=i;
        }

     }
     dsoma=se-s;
     printf("%d %d\n",q[le][ce]-dsoma ,q[le][ce]);




    return 0;
}
