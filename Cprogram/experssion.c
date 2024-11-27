
#include<stdio.h>
int main(){
//&& operation;
int x=10;
int y=20;
int z=30;
int result= (x+y)>z && (y+z)>x;
//10+20>30 && 20+30>10;
//30>30 && 50>10
//&& operator both Condition must true, but this condition one is true another one is wrong;so output 0 ;

printf("The && Operation result= %d",result);

//or operation;
int output= x+y>z || (y+z)>x;

printf("\nThe || operation result: = %d",output);

//increment;
 int a=2,b=3,A,B;

 printf("\nbefore Increment:=%d %d",a, b);
 A=++a;
 B=b++;
 printf("\nThe Pre increment Value:= %d",A);

 printf("\nThe Post increment Value:= %d",B);
 A=++a;



 int i =20;


 printf("\nBefore Increment i:= %d",i);
 printf("\nPrefix increment i:= %d",--i);
 printf("\nPostfix increment i:= %d",i--);
 printf("\nPostfix increment Result:= %d",i);
return 0;
}
