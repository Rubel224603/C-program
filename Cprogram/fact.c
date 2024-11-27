#include<stdio.h>

int main(){

    int n;
    int fact=1;
    int i;
    printf("Enter the Factorial Number: ");
    scanf("%d",&n);
    if(n!=0){

       for(i=1;i<=n;i++){
       fact=fact*i;
      }
     printf("%d",fact);

    }




return 0;
}
