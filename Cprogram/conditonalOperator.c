#include<stdio.h>
int main(){

//find out two number which one is large;
//a>b?a:b;(ternary operator)

int fNumber,lNumber,result;
printf("Enter the first Number: ");
scanf("%d",&fNumber);
printf("Enter the Second Number: "
           );
scanf("%d",&lNumber);


result = fNumber>lNumber ? fNumber:lNumber;
printf("%d",result);





return 0;
}
