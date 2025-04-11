#include <stdio.h>

int main() {
    int v, t=1, um,dez,cin,cinco;
    scanf("%d", &v);

    while(v!=0){

       um=0;
       dez=0;
       cinco=0;
       cin=0;
       while(v>0){
        if(v>=50){
           v=v-50;
           cin=cin+1 ;
        } else if(v>=10){
           v=v-10;
           dez=dez+1;

        }else if(v>=5){
            v=v-5;
            cinco=cinco+1;

        } else if(v>=1){
           v=v-1;
           um=um+1;

        }

       }
       printf("Teste %d\n",t);
       printf("%d %d %d %d\n\n", cin, dez, cinco, um);




     scanf("%d", &v);
     t++;
    }

    return 0;
}
