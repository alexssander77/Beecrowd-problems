#include <stdio.h>
#include <string.h>

int main() {

    int num;
    scanf("%d", &num);

    for(int tes=0; tes<num; tes++){
        char n[101];

        scanf("%s", n);

        if(strlen(n)==5){
            printf("3\n");
        }else if(n[0]=='o'&&n[1]=='n' || n[0]=='o'&& n[2]=='e' || n[1]=='n' && n[2]=='e'){
            printf("1\n");
        }else{
        printf("2\n");

        }
    }


    return 0;
}
