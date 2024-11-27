#include<stdio.h>
int main(){

int i,j,row = 5;

     for(i=1;i<=5;i++){
        printf("outer loop: %d\n ",i);
        for(j=1;j<=5;j++){
            printf("%d\n",j);
        }
     }                                                                  //1
                                                                        //1 2
                                                                        //1 2 3
                                                                        //1 2 3 4
                                                                        //1 2 3 4 5







return 0;
}
