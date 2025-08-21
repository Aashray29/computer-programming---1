#include<stdio.h>
#include<conio.h>
float main(){
  float g,a,d,n;
  clrscr();
printf("enter gross salary: ");
scanf("%f",&g);
a = (g*10)/100;
d = (g*3)/100;
n = g + a - d;
printf("net salary is: %f + %f - %f = %f",g,a,d,n);
  getch();
}
