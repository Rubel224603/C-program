#include<stdio.h>

int main(){

    //linear search programme;
    //find the value 40 which position this array;

    int arr[]={1,2,35,4,5,6,7,8,9,10,50,11,40};

    int i; int find;
    int pos = -1; //position = -1 ;cause: suppose,the element is absent the array;

    int arrLength= sizeof(arr)/sizeof(arr[0]);

    printf("Total Array Element = %d\n",arrLength);

    printf("\nEnter the Number what you find: ");

    scanf("%d",&find);
    //printf("%d\n",arr[2]);

    for(i=0;i<arrLength;i++){
        //printf("The Array Elements are: %d\n",arr[i]);

        if(arr[i]==find){
            printf("Find array element = %d",arr[i]);
            pos=i+1;
            break;
        }

    }if(pos == -1){
        printf("40 is not in this array");

    }else{
        printf("\nThe Array index Number= %d",pos);
    }





return 0;
}
