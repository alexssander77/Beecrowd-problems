#include <stdio.h>

int main() {

    int c;
    scanf("%d", &c);

    for(int tes=0; tes<c;tes++){

        char kam[201];
        int a1=0, a2=0, a3=0;
        scanf("%s",kam);

        for(int i=0; i<201 && kam[i]!='\0';i++){
            if(kam[i]=='a'){
               a1++;
            }
            if(kam[i]=='k'){
               a2=a1;
               a1=0;
            }


        }
        a3=a1*a2;
        printf("k");
        for(int j=0; j<a3; j++){
            printf("a");
        }
        printf("\n");

    }



    return 0;
}
