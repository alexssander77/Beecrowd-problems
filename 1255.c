#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int tes;


    scanf("%d", &tes);

    for(int i=0; i<tes; i++){

        char f[201] ;
        int frequencia[26]={0},maior=-1;

        scanf(" %[^\n]s", f);

        for(int j=0; j<201 && f[j]!='\0'; j++){
             if (isalpha(f[j])) {
                f[j] = tolower(f[j]);
             }

        }

     for(int j=0; j<201 && f[j]!='\0'; j++){
          if (islower(f[j])) {
            frequencia[f[j] - 'a']++;
            if(frequencia[f[j] - 'a']>maior){
                maior=frequencia[f[j] - 'a'];
            }
          }

     }
     for(int j=0; j<26; j++){
            if(frequencia[j]==maior){
               printf("%c", j+'a');
            }


     }
     printf("\n");

    }


    return 0;
}
