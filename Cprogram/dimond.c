#include<stdio.h>
int main(){


    int i,j;
    for(i=1;i<=4;i++){
        //printf("  ");
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k= 1;k<=i;k++){
           printf("%d ",k);


        }


         printf("\n");
    }

    //printf("\n");

    for(int x=3;x>=1;x--){
        printf(" ");
        for(int y = 1; y<= 3-x;y++){
            printf(" ");
        }
        for(int z = 1;z<=x; z++){
            printf("%d ",z);
        }
        printf("\n");
    }














return 0;
}
