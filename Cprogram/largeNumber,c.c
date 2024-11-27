
#include<stdio.h>
int main(){

int numberArray[] ={10,20,30,40,50,60};


int size = sizeof(numberArray);
 printf("Array Size: %d\n",size);
 int j;


 int length = size/4;

 int largeNumber = numberArray[0];

 for(int i=0;i<length;i++){

  //printf("%d\n",numberArray[i]);



    if(largeNumber < numberArray[i]){
        largeNumber = numberArray[i];

    }


}  printf("large number = %d",largeNumber);




















return 0;
}
