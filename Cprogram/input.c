#include<stdio.h>
int main(){

char myName[20];

printf("Enter your Name:");

//scanf("%s",&myName);
gets(myName);//use gets for space with other text;
printf("Your Name is:- %s\n",myName);
printf("Hello ");
puts(myName);


//size of

int i;
float b;
double c;
char name;
printf("Integer  size = %d\n",sizeof(i));
printf("Float size = %d\n",sizeof(b));
printf("double size = %d\n",sizeof(c));
printf("Charecter size = %d\n",sizeof(name));

//ascii value;
float n;
printf("Enter a ascii Number:-");
scanf("%f",&n);
printf("\n You enter :%f",n);



return 0;
}
