#include<stdio.h>
int main(){

   // int startNumber, endNumber,count;
/*
    printf("Enter the starting Number:= ");
    scanf("%d",&startNumber);
    printf("Enter the ending Number:= ");
    scanf("%d",&endNumber);
    count = 0; int
    for(startNumber; startNumber<=endNumber; startNumber++){

       if(endNumber % startNumber==0){
            count++;
            printf("Division Number:= %d\n counter:= %d\n",startNumber,count);

       }
    }if(count == 0){
        printf("Print Number");

    }else{
        printf("NOt a prime Number");
    }
*/


    int i,j,num=100,count;

    for(i=2;i<=num; i++){
       count = 0;
       for(j=2;j<i;j++){

            if(i %j == 0){


                count++;
                printf("%d. counter:= %d\n",i,count);
            }

       }
       if(count == 0){
        printf("\n%d Is a Prime Number \n",i);

    }

    }







return 0;
}
