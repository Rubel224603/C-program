
#include<stdio.h>
int main(){
//x=2,y=5;
// equaition: y=++y + ++x;

int x=2,y=5;

//y = ++y ;//age add kore pore use: y=6 (use) ar y++ = 6(add)

//printf("Y=%d\n",++y);

//printf("X=%d\n",++x);

y = ++y + ++x;

// y=++y mane (1+5)  kore y k deya  y=6;
//+ operator;
//++x = 1+x= 1+2=3
//equation y=6 + 3 =9 output

printf("x=%d\ny=%d",x,y);



return 0;
}
