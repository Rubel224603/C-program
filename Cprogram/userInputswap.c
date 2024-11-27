
#include<stdio.h>

int main(){

int n,i;
printf("Enter array size: ");
scanf("%d",&n);
int arr[n];
int swapArray[n];
int length = sizeof(arr)/sizeof(arr[0]);
//printf("%d",length);

printf("Enter Array elements: \n");

for(i=0;i<length;i++){
  scanf("%d",&arr[i]);


}
// print the array values;
printf("Your given array :");
for(i=0;i<length;i++){
   printf("%d",arr[i]);
   swapArray[i]=arr[i];
};
//swapped elements ;
printf("\nSwapped array =");
for(i=0;i<length;i++){
    printf("%d",length-i);
}



//printf("%d",n);



}
