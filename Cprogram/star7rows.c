#include<stdio.h>
int main(){

int i,j,x,y;
for(i=1;i<=8;i++){
        printf("");
    for(int space=1;space<=7-i;space++){
       printf("=");
    }
    for(j=1;j<=i;j++){
        printf("%d ",j);
    }
    printf("\n");
}

















return 0;
}
