#include<stdio.h>

int main(){
    int i, j;

     for(i=1;i<=5;i++){
            //printf(" ");
         for(j=1;j<=5-i;j++){
           printf("=");
         };
         for(int k=1;k<=i;k++){
            printf("%d=",k);
         }
        printf("\n");


     }


return 0;
}
