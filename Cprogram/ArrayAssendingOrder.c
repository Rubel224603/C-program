#include<stdio.h>
int main(){



    int myArray[]={10,2,30,35,40,30};

    int size;
    size =sizeof(myArray);
    int length = size/4;
    int i,j, temp;

    for (i = 0; i < length - 1; i++){
        for (j = i + 1; j < length; j++){
            if (myArray[i] > myArray[j]){
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }


    printf("Ascending Order: ");
    for (i = 0; i < length; i++) {
        printf("%d ", myArray[i]);
    }


















return 0;}
