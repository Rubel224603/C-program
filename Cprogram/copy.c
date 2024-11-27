#include<stdio.h>

int main(){

    int arr1[]={1,2,3,4,5,6};
    int arr2[10];
    int i;
    int arrLength= sizeof(arr1)/sizeof(arr1[0]);
    printf("%d\n",arrLength);
    for(int i=0;i<arrLength;i++){
       printf("%d",arr1[i]);
       arr2[i]=arr1[i];
       //printf("%d",arr2[i]);


    }
    printf("\n");
    for(i=0;i<arrLength;i++){
        printf("%d",arr2[i]);
    }
     //printf("The new array= %d",arr1[i]);
     //printf("%d",arr1[i]);

}
