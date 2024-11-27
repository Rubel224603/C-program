#include<stdio.h>

int main(){

    //ghono bostur area and volume;

    float pie = 3.1416;
    float radius;
    printf("Enter the Value of Radius:= ");
    scanf("%f",&radius);
    float area = pie*radius*radius;
    printf("The area of ghonobostu: = %.2f",area);


    //ghonobostur volume;
    float volume =(pie*radius*radius*radius*4)/3;
    printf("\nThe Vulume Ghonobostu:= %f",volume);








return 0;
}
