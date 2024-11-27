
#include<stdio.h>

int main(){

//Convert ccentigrade scale to farenheight scake;

float centigrade;
printf("Enter your Centigrade Value: =");
scanf("%f",&centigrade);
float farenhaight;
farenhaight = centigrade/5*9+32;
printf("The Farenhaight temparature: =%.2f",farenhaight);

double f;
printf("\nEnter your Farenheight Value:= ");
scanf("%lf",&f);
double c;
c =((f-32)*5)/9;
printf("Farenheight Temparature= %f",c);



}
