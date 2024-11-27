#include<stdio.h>
int main (){

//problem where x=2 & y=5;
// equation: y=++y + x++;
int x=2;
int y=5;

printf("Pre increment used value y =%d\n",y);
//printf("pre increment adding value y =%d\n",y);
//printf("Post increment (Used) value x= %d\n",x++); //x=2; age babhor hobe 2 .
//printf("Post increment (adding) kora value x = %d",x); //pore  x = x+1 =2+1= 3

y=++y + x++;
 //y=++y = 1+5=6
 //+
 //x++= x=2(used). then x++=x+1=2+1=3 add  ;
 //y=++y + x++ =6+2= 8


printf("x=%d  y=%d\n",x,y);

return 0;
}
