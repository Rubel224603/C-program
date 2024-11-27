
#include<stdio.h>

int main(){

int sum = 0;
int arr[];
int n,i;

printf("Enter the array Number: ");


scanf("%d",&n);
printf("Enter the number list:%d\n",n);

for(i=0;i<=n;i++){
    scanf("%d",&arr[i]);
}


for(i=0;i<=n;i++){
    //printf("%d",arr[i]);
    sum = sum+arr[i];
}


printf("Sum =%d\n",sum);
printf("Avarage= %f",sum/n);
/*arr[0]=20;
arr[1]=30;
arr[2]=10;
arr[3]=40;
arr[4]=50;*/

/*for(int i=0;i<=5;i++){
    sum =sum + arr[i];
    //printf("%d",sum);
}*/
//printf("%d",sum);










return 0;
}
