#include<stdio.h>

int main(){
char str[12];
printf("enter the input:");

scanf("%s",&str);
int length = strlen(str);
printf("length=%d\n",length);
int arrayIndex = length-1;
printf("array Index= %d\n",arrayIndex);
int lastIndexValue = str[arrayIndex]-48;//convert the number
printf("The Last Value= %d\n",lastIndexValue);

if(lastIndexValue%2==0){
    printf("even\n");
}else{
    printf("odd\n");
}


return 0;
}
