#include<stdio.h>

int main(){

    int t; int i=1; int n;
    printf("Enter How many Number You want to check:");
    scanf("%d",&t);
    printf("enter your number:");
     while(i<=t){
        scanf("%d",&n);
        if(n%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
         i++;
     }


return 0;
}
