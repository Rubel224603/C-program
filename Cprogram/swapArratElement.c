#include<stdio.h>


int main(){

printf("Enter the index number of array = ");
int arr[]={1,1,1};
int swapArray[10];
int i;
int length = sizeof(arr)/sizeof(arr[0]);
printf("%d\n",length);
printf("The Array is = ");
for(int i=0;i<length;i++){
    printf("%d",arr[i]);
    swapArray[i]=arr[i];
}

//swapped  array;

printf("\nswapped elements are = ");
for(i=0;i<length;i++){
    printf("%d",(length-i));
}











return 0;
}
