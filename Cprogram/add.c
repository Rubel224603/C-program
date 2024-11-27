
#include<stdio.h>

int main(){

int number1, number2, sum;
//printf("Enter the two Number: ");
//scanf("%d %d",&number1,&number2);
//sum = number1+number2;
//printf("%d+%d= %d",number1,number2,sum);


printf("Enter How Many Number to Chck:");

int T,a,i;

scanf("%d",&T);
for(i=1;i<=T;i++){
        printf("enter check the input Number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}
//scanf("%d %d",&a,&b);
//printf("%d %d",a,b);





return 0;
}
