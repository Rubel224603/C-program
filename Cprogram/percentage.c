
#include<stdio.h>

int main(){
int total=400;
int n1,n2,n3,n4;
printf("Enter Your 1st Subject Mark:= ");
scanf("%d",&n1);
printf("Enter the 2nd Subject Mark:= ");
scanf("%d",&n2);
printf("Enter the 3rd Subject Mark:= ");
scanf("%d",&n3);
printf("Enter the 4th Subject Mark:= ");
scanf("%d",&n4);
int mark = n1+n3+n2+n4;
printf("Obtain Mark:= %d\n",mark);
float percentage;
//float a = 4000/1000;
percentage =(mark*100)/total;
printf("The Percentage: = %f",percentage);



return 0;
}
