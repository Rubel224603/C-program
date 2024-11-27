#include<stdio.h>

int main(){

//0 1 1 2 3 5 8 13 21 34

int fibArr[30];
fibArr[0]=0;
fibArr[1]=1;

int n,i;
printf("Enter the number Fibonacci series list: ");
scanf("%d",&n);
  for(i=2;i<n;i++){
    fibArr[i]= fibArr[i-1]+fibArr[i-2];

  }
  for(i=2;i<n;i++){
      printf("%d",fibArr[i]);

  }

return 0;
}
