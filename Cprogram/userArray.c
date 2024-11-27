
#include<stdio.h>
int main(){

    printf("enter the array size:");
    int size ,i,j;
    scanf("%d",&size);
    int number[size];
    //printf("%d",size);

    for(i=0;i<size;i++){
        printf("Enter the array elemetn:");
        scanf("%d",&number[i]);
        //printf("%d\n",j);

    }
     printf("The Array number[%d] ={ ",size);

     for(i=0;i<size;i++){
            printf("%d ",number[i]);
        }
    printf("}");







return 0;
}





