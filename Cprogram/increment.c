#include<stdio.h>
int main(){

    printf("===Increment Operator===\n");
    int i=10,j=10;
    printf("given Value\ni=%d,j=%d\n",i,j);//i=10,j=10

    //++i;
  // j++;
    printf("++i= %d,j++= %d" ,++i,j++);//i=11,j=10
    printf("\nafter increment\n");
    printf("i=%d ,j=%d\n",i,j);//i=11,j=11
    printf("again increment\n");
    printf("i++= %d,++j= %d\n",i++,++j);//i=11,j=12
    printf("\nekhon normal value jeta use korbe\n");
    printf("i=%d,j=%d",i,j);//i=12,j=12
    printf("\n");
    //-- decrement operator;
    printf("\n===Decrement ====\n");
    int x=10,y=10;
    printf("x=%d,y=%d\n",x,y);
    printf("--x=%d ,y--=%d",--x,y--);//9,10;
    printf("\nafter decrement\nx=%d,y=%d\n",x,y);//9,9
    printf("x--=%d,--y=%d",--x,y--);//8,9
    printf("\n");
    printf("x=%d,y=%d",x,y);//8,8


return 0;
}
