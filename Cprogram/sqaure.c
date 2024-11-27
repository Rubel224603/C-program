#include<stdio.h>

int main(){
int T,i,N,j;
//printf("Enter the  line Testing Value:");

scanf("%d",&T);

for(i=1;i<=T;i++){
   // printf("enter the length of square:");
    scanf("%d",&N);
    for(j=1;j<=N;j++){
        printf("\n");
        for(int k=1;k<=N;k++){
            printf("*");
        }
    }
    printf("\n");
}




return 0;
}
