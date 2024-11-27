#include<stdio.h>

int main(){

//printf("Enter your Test Case Number:");
int T,N,i;

scanf("%d",&T);
//printf("Enter the factorial Number:");

for(i=1;i<=T;i++){

    scanf("%d",&N);
    long long int fact=1,i;


    for(i=1;i<=N;i++){
        //scanf("%d",&N);
        fact=fact*i;
       // printf("Enter the factorial Number:\n");


    }printf("%lld\n",fact);

}


return 0;

}

