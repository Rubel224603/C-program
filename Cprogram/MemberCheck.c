#include<stdio.h>

int main(){

    int balance;
    printf("enter your balance:");
    scanf("%d",&balance);

    if(balance>0){

        //printf("You will earn money\n");

        if(balance<1000){
            printf("You are not eligible for account");
        }else if(balance>=1000 && balance<50000){

            printf("You need to Account Fast to become a member");

        }else if(balance>=50000 && balance <100000){

            printf("You are Vip Member");

        }else if(balance>=100000){

            printf("You are Premium member");

        }else{

            printf("You are only member");
        }

    }else{
        printf("You enter invalid number");
    }



return 0;

}
