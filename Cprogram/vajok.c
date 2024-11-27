#include<stdio.h>

int main(){

int T,i,N,j;

printf("Enter Testing Value: ");
scanf("%d",&T);

for(i=1;i<=T;i++){
   //printf("Enter the Number which find out factor:");
    scanf("%d",&N);
    printf("Case %d:",i);
    for(j=1;j<=N;j++){
         if(N%j==0){
        printf(" %d",j);
    }
    }

    //printf("\n");
}



 return 0;
}
