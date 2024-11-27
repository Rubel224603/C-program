
#include<stdio.h>

int main(){


int arr[]={1,2,2,3,4};

arr[5]=30;

printf("%d",arr[1]);
printf("\n%d",arr[5]);

printf("\n");
//looping use array

int a =0;

while(a<6){
 printf("Number are: %d\n",arr[a]);
    a++;

}
printf("\n");

int ar[4];
ar[1]=20;
ar[2]=21;
ar[3]=4;
ar[4]=5;


printf("%The size of array =%d\n",sizeof(ar));
printf("The array o number element= %d\n",sizeof(ar[0]));
int length = sizeof(ar)/sizeof(ar[0]);
printf("The array elements is: %d",length);

//multidimensional array;


 //int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
 // printf("%d", matrix[0][1]);
printf("\n");
int roll[2][3]={{1,2,3},{4,5,6}};
roll[0][0]=9;

printf("The array(Multidimensonal) change value=%d\n",roll[0][0]);

//loop use multidimensonal arry;
 int i,j;
 for(i=0;i<2;i++){
    for(j=0;j<3;j++){
       printf("looping throw = %d\n",roll[i][j]);
    }
 }




return 0;

}
