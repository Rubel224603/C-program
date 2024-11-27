
#include<stdio.h>
#include<math.h>
int main(){

    // area of rectangle;


    int a,b;
    printf("Enter the length of rectangle:");
    scanf("%d",&a);
     printf("Enter the width of rectangle:");
     scanf("%d",&b);
     int area= a*b;
     printf("The rectangle area= %d",area);


//area of circle;

int r;
float pi=3.1416;
printf("\nEnter the  radius of circle:");
scanf("%d",&r);
float Circlearea = pi*r*r;
printf("The area of the circle= %.2f",Circlearea);


//Area of triangle 3 edge;

int edgeA,edgeB,edgeC;

printf("\nenter the first edge :");
scanf("%d",&edgeA);
printf("enter the second edge: ");
scanf("%d",&edgeB);
printf("enter the last edge: ");
scanf("%d",&edgeC);
int sumOfedge =(edgeA+edgeB+edgeC)/2;
float TriagleArea = sqrt(sumOfedge*(sumOfedge-edgeA)*(sumOfedge-edgeB)*(sumOfedge-edgeC));
printf("Three Edge  Triangle area = %.2f",TriagleArea);




return 0;
}
