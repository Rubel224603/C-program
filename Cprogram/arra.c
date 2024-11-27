#include<stdio.h>
int main(){

    int arr[]= {10,2,3,4,50,40};
   // int totalBytes= sizeof(arr);
    //printf("%d",totalBytes);
    int length = sizeof(arr) / sizeof(arr[1]);

    //printf("%d",length);

    for(int i=0;i<=length;i++){
        printf("%d\n",arr[i]);
    }

return 0;
}
