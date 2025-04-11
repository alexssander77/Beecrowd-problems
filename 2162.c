#include <stdio.h>

int main() {
     int n,b=1;

     scanf("%d", &n);

     int v[n];

     for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
     }
     if(v[0]>v[1]){
         for(int i=2;i<n;i++){
            if(i%2==0){
                 if(v[i]<=v[i-1]){

                    b=0;
                    break;
                 }

             }else{
                 if(v[i]>=v[i-1]){
                    b=0;
                    break;
                 }

             }

         }



     }else if(v[1]>v[0]){
         for(int i=1; i<n ;i++){
            if(i%2==0){

                  if(v[i]>=v[i-1]){
                    b=0;
                    break;
                 }
             }else{
                 if(v[i]<=v[i-1]){

                    b=0;
                    break;
                 }

             }

         }



     }else{
         b=0;
     }

      printf("%d", b);

    return 0;
}
