#include<stdio.h>
int main(){

int a,b,c;
a=4,b=3;
c = a && b; //4 && 3 both are true cause they are not ziro: result = 1(true)

//c=1(true);

b = a||b||c; //4||3||1 all value are not ziro;
//b=1(true);

a = a&& b||c; //4 && 1||1
//4 && 1 (true) || 1 .a=1(true)
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);






return 0;
}
