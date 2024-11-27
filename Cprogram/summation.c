#include<stdio.h>

int main(){

int  T;
//printf("enter the testing Number:");
scanf("%d",&T);
char arr[100];

for(int i=1;i<=T;i++){
    //printf("enter the Number to first and last digit summation:");
    scanf("%s",&arr);
    int length= strlen(arr);
   // printf("length= %d\n",length);
    int indexLength = length-1;
    //printf("Array indexLength =%d\n",indexLength);
    int indexLastDigit= arr[indexLength]-'0';//convert string array  to number;
    //printf("lastIndex Value=%d\n",indexLastDigit);

    int firstIndcex=arr[0]-'0';//convert string array  to number;
    //printf("firstIndex=%d\n",firstIndcex);
    if(firstIndcex==0){
      int sum =0 + indexLastDigit;
      printf("Sum = %d\n",sum);

  }else{
      int sum = firstIndcex+indexLastDigit;
    printf("Sum = %d\n",sum);

  }

}

return 0;
}
