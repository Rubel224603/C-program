#include<stdio.h>

int main(){
    int baseNumber;
    int power;
    int result;
    printf("Enter the Value of Base:= ");
    scanf("%d" ,&baseNumber);
    printf("Enter the Value Of Power:= ");
    scanf("%d",&power);

    result= pow(baseNumber,power);// pow babhor kora hoy suchoker man ber korte;
    printf("The Exponent Value:= %d",result);







return 0;
}
