#include<stdio.h>

int main(){


     int distance;
     int rent;
     printf("Enter your distance:= ");
     scanf("%d",&distance);
    if(distance>0){

        //printf("please enter your distance");

        if(distance<=10){

            rent=20;
            printf("The rent:= %d taka",rent);

        }else if(distance>10 && distance<=20){

            rent=50;

            printf("The rent:= %d take",rent);
         }
         else if(distance<=100){
             rent=100;
             printf("%d",rent) ;
         }else{
            printf("Your Destination is now another root");
         }


    }else{
        printf("You are not going anywhere");
    }











return 0;
}
