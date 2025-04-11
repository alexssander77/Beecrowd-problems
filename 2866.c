#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int cas;
    scanf("%d", &cas);

    for(int tes=0; tes<cas; tes++){
        char f[1001];
        scanf("%s", f);


        for(int i=strlen(f)-1; i>=0; i--){
            if(isupper(f[i])){
                continue;
            }else{
                printf("%c", f[i]);
            }

            }
      printf("\n");

    }



    return 0;
}
