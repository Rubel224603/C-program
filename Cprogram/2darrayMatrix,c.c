#include<stdio.h>

int main(){

    int a[3][3] = {{1,2,7},{2,3,2},{4,5,4}};
    int b[3][3] = {{2,3,5},{3,2,6},{6,4,3}};

    int i,j,addition = 0;

     printf("Matrix A:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           // printf("%d ",a[i][j] + b[i][j]);

           printf("%d ",a[i][j]);

           // k = k +(a[i][j] + b[i][j]);

        }
          //printf("\nSummation = %d",k);


        printf("\n");


    }

  //printf("Summation= %d",k);



    printf("Matrix B:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
             printf("%d ",b[i][j]);
        }
        printf("\n");

    }
    printf("Result Matrix:A+B \n");
    for(i=0;i<3; i++){
       for(j=0;j<3; j++){
          int sum;
          //printf("%d ", sum = a[i][j] + b[i][j]);

          sum = a[i][j] + b[i][j];
          printf("%d ",sum);
          addition = addition + sum;

       }
       printf("\n");
    }
    printf("The sum = %d",addition);










return 0;
}
