#include<stdio.h>

int main(){

printf("Hello New Programm\n");
int i;

char myName[]="RUBEL";

for(i=0;i<5;++i){
    printf("%c\n",myName[i]);
}


//single input with user;

int numbers;
//float number2;

scanf("%d",&numbers);
printf("You Enter %d\n",numbers);

//multiple input with user;
int number1;
float number2;
double number3;

printf("Enter two  numbers:intjer & float:- \n");

scanf("%d %f %lf",&number1,&number2,&number3);
printf("You Enter intjer & float ,double Number:-\n%d\n%f\n %fl\n",number1,number2,number3);











return 0;

}
