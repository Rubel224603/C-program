#include<stdio.h>

int main(){
//10 15 20;
printf("enter Three Number");
int firstNumber,SecondNubmber,thirdNumber ,large;
scanf("%d%d%d",&firstNumber,&SecondNubmber,&thirdNumber);
//10>15?(10>20?10:20):(15>20?15:20)
large= firstNumber>SecondNubmber?(firstNumber>thirdNumber?firstNumber:thirdNumber):(SecondNubmber>thirdNumber?SecondNubmber:thirdNumber);
printf("%d",large);





return 0;
}
