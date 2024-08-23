#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        char frase[1001];
        int half;

        scanf(" %[^\n]", frase);
        half=strlen(frase)/2;

        for(int j=0; j<strlen(frase); j++){
            if(isalpha(frase[j])){
               frase[j]=frase[j]+3;

            }


        }
        for(int j=0; j<strlen(frase)-half; j++){
            frase[j]=frase[j]-1;

        }
        for(int j=strlen(frase)-1; j>=0; j--){
           printf("%c", frase[j]);


        }

        printf("\n");



    }


    return 0;
}
