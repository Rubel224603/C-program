
#include<stdio.h>
//#include<math.h>
int main(){

//array in c ;

int number;
printf("Enter your Decimal number: ");
scanf(" %d",&number);
printf("Octal Number= %o\n",number);
 //int num=20;
 //scanf("Enter the decimal number=%d",&num);
// printf("%x",num);

 float base,height,area;
 //area=0;
 printf("Enter the triangle Base:");
 scanf("%f",&base);
 printf("Enter the triangle height:");
 scanf("%f",&height);

 area= .5*(base*height);
 printf("The area= %.1f\n", area);


    /*printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    area = (base * height) / 2;
    printf("The area of the triangle is: %d\n", area);

    */
    int  hex;
    printf("enter hexadecimal number:");
    scanf("%d",&hex);
    printf("hexadecimal number= %x",hex);

return 0;
}
