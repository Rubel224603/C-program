#include<stdio.h>

int main(){

//using an array  find 5 numbers summation;

int arr[10]; int sum=0;int t;
printf("Enter Testing Steps:");
scanf("%d",&t);

for(int i=1;i<=t;i++){
    printf("Enter your %d Number: ",i);
   scanf("%d",(arr+i));//&arr[i] is same (arr+i);
   sum= sum+*(arr+i);//*(arr+i) is same as arr[i];
  // printf("Sum= %d\n\n",sum);

}
printf("Final Sum = %d",sum);



//return 0;
}
