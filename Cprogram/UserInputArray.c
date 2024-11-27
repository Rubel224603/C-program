#include<stdio.h>
int main(){



    printf("Enter array size:= ");
    int size;
    scanf("%d",&size);
    int userArray[size];
    int largNumber,i;


    //printf("%d",size);
    for(int i = 0;i<size; i++){
       printf("Enter the value of  array: \n");
       scanf("%d",&userArray[i]);
       //printf("%d\n",userArray[i]);
       //printf("Array Elements are:= %d\n",userArray[i]);

    }
    largNumber = userArray[0];

    for(i=0;i<size;i++){

      if(largNumber < userArray[i]){

         largNumber = userArray[i];

      }


    }

    printf("Array Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", userArray[i]);
    }
     printf("\nLarge Number of the Array is = %d\n",largNumber);




















return 0;
}

