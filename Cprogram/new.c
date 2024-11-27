#include <stdio.h>


int main() {

    char n[100];

    int T,i,length;
   printf("Enter How many Line are testing: ");
    scanf("%d", &T);

   // len = strlen(n);

    //printf("length is =%d\n",len);
    //int lastDigit = len-1;
    //int subLastDigit = ((n[lastDigit])-'0');

   // printf("last digit adjac value =%d\n",subLastDigit);


  //  printf("Last Digit= %d\n",lastDigit);


    for(i=1;i<=T;i++){
        printf("Enter the Value which will check:\n");
        scanf("%s",&n);
         length = strlen(n);
          printf("length is =%d\n",length);
          int lastDigit = length - 1;
          printf("last position as an array=%d\n",lastDigit);
            int nar=n[lastDigit];
            printf("last digit array n=%d\n",nar);
          int subLastDigit = n[lastDigit]-'0';//'0' asccqi value= 48;
          printf("last digit  value =%d\n",subLastDigit);
       if(subLastDigit % 2 == 0){
        printf("even\n");
       }else{
        printf("odd\n");
       }

    }

    return 0;
}
