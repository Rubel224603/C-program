
#include<stdio.h>

int main(){

int a =10;
 int b =20;

printf("%d\n",a>b);
printf("%d\n",a==b);
printf("The statement is: %d",a<20 );

 //bool isProgrammingFun = true;
  //bool isFishTasty = false;
  //printf("%d\n", isProgrammingFun);

int  number;
char fullName[30];
char ch;

//print String;

printf("\nEnter string-:");
fgets(fullName,sizeof(fullName),stdin);
printf("Your String:%s", fullName);

//print a charater;
printf("\nEnter A character-:");
scanf("%c",&ch);
printf("You enter :%c",ch);

//print Number;

printf("\nEnter Your Number-:");
scanf("%d",&number);

printf("You pressed : %d",number);





return 0;
}
