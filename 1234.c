#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[51];

    while(fgets(frase, sizeof(frase), stdin)){
        int var=0;
        for(int i=0; i<strlen(frase); i++){

            if(frase[i]!=' '){
               if(var==0){
                  frase[i]=toupper(frase[i]);
                  var=1;

               }else if(var==1){
                  frase[i]=tolower(frase[i]);
                  var=0;

               }

            }

        }

      printf("%s", frase);
    }


    return 0;
}
