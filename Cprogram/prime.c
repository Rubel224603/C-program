#include<stdio.h>

int main(){


    int num=50 ,i,count=0;

    for(i=2;i<=num; i++){

        if(num%i==0){
                count++;
            printf("the division value:= %d\n",i);
            printf("count number:= %d\n",count);
        }

    }if(count==0){
        printf("This is prime Number");
    }else{
        printf("not prime NUmber");
    }








return 0;
}
