
#include<stdio.h>
int main(){

int a,b,c;
a=10;
c=a;
b=20;
a=b;b=c;
//c=b;
printf("a=%d\n",a);//a=20

printf("b=%d",b);//b=10

return 0;
}
