#include<stdio.h>


int main(){


    int myarr[2][3]={ {10,20,30},{20,30,40}};
    int sum=0;

    printf("The Array = ");
    for(int i=0;i<2;i++){
            for(int j= 0;j<3;j++){
                printf("%d ",myarr[i][j]);
                //printf("%d " ,myarr[i][j]);
                //printf("The array element= %d \n",myarr[i][j]);

               sum = sum + myarr[i][j];

            }
           // printf("\n");
        //printf("The sum = %d\n",sum);
    }
    printf("\nTotal= %d",sum);











return 0;
}
