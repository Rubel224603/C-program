
#include<stdio.h>

int main(){
//printf("hello world\n");
 //printf("I am learning C.\t I am Student\" But what i do \\n i am not skilld person");
 int a=20;
 printf("%d\n",a);
 float b= 10.2222;
 printf("%.1f\n",b);
 double c= 1000.6666666555;
 printf("%.3lf\n",c);

 int rubel =2;
 float asik=25;
 int sum = (float)asik/rubel;

  printf("The sum = %d\n",sum);

  char myLetter = 'R';
  printf("%c\n", myLetter);
 // printf("hello world");
  float su = (float)5/2;
  printf("%f\n",su);

  const int mr =100;
  const int pi= 3.1416;

  printf("%d\n",pi);
  int x =5;
   int y= 40;
  printf("%d\n",x>y);
  printf("ok hhhhh");
/*
  int i=1;
  int j=1;
  for(i;i<=2;i++){
    printf("%d\n",i);
    for(j;j<=4;j++){
        printf("%d\n",j);
    }
  }*/
printf("Another loop\n");

   int m, n;

  // Outer loop
  for (m = 1; m <= 4; m++) {
    printf("Outer: %d\n", m);  // Executes 4 times

    // Inner loop
    for (n = 1; n <= 4; n++) {
      printf(" Inner: %d\n", n);  // Executes 16 times (4 * 4)
    }
  }
int e=0;
int r=0;
 for(e=1;e<=2;e++){
    printf("Out: %d\n",e);
    for(r=1; r<=3;r++){
      printf("IN: %d\n",r);;
    }
 }

 for(e=1;e<=10;e++){
    if(e==4){

        break;
    }  printf("Use beak: %d\n",e);
 }


 int myNumber[]={1,2,3} ;
 printf("%d\n", myNumber[10]);
 myNumber[2]=22;


 //int number;
 double numbr;
 //float
 printf("Enter a Number: ");
 scanf("%lf" ,&numbr);
 printf("You are pressed %f\n",numbr);

 char rub[]="Rubel Hosen";
 rub[2]='l'; //chage specfic charecter;
 printf("%s\n",rub);
printf("Bangladesh Now You go\n");

 char myName[]="Future";
 int rm;
 for(rm =0;rm<6;++rm){
    printf("%c\n",myName[rm]);
 }

 return 0;
}
