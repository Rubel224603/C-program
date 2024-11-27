
#include<stdio.h>

int main(){
//two matrix summation;

    int a[2][2]={{10,20},{10,20}};                  // |10   20|
                                                    // |10   20|

    int b[2][2] ={{30,40},{50,60}};                 // |30   40|
                                                    // |50   60|

    int sum[2][2];                                  //  |10+30= 40  20+40= 60|
                                                    //  |10+50= 60  20+60=  80|

    int i,j;
    for(i=0;i<2;i++){

        for(j=0;j<2;j++){
           // printf("%d ",a[i][j] + b[i][j]);

            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ",sum[i][j]);

        }

        printf("\n");
    }















return 0;
}
