#include<stdio.h>
int main(){

    int userMonth ;
    printf("Enter the  number of month: between 1 to 12 ");
    scanf("%d",&userMonth);
    int thirty =30;
    int thirtyOne=31;
    int feb=28;

    if(userMonth >0 && userMonth<=12){
         if(userMonth == 1 || userMonth ==3 || userMonth==5 || userMonth==7 || userMonth==8|| userMonth==10 || userMonth==12){

            printf("this is 31 days month");
        }
         else if(userMonth == 4 || userMonth == 6 || userMonth==9 || userMonth==11){

            printf("this 30 days month");

        }else{
            printf("this february month");
        }
    }else{
        printf("You enter the wrong ");

    }













return 0;
}
