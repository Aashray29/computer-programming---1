#include<stdio.h>
#include<conio.h>
float main(){
  float a,b,c;
  clrscr();
printf("enter amount: ");
scanf("%f",&a);
printf("enter interest rate: ");
scanf("%f",&b);
c = (a*b)/100;
printf("Total interest = %f",c);
  getch();
}
