#include<stdio.h>
int main(){

int T,num1,num2,temp,i,num3;
printf("Enter how Many Test you Need: ");
scanf("%d\n",&T);
for(i=1;i<=T;i++){
    scanf("%d%d%d",&num1,&num2,&num3);
    // Sorting numbers in ascending order
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Case %d:%d %d %d\n",i,num1,num2,num3);
}






return 0;
}
