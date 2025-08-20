#include<stdio.h>
#include<conio.h>
float main(){
  float a,b,c,d;
  clrscr();
printf("enter rectangle's  length: ");
scanf("%f",&a);
printf("enter rectangle's width: ");
scanf("%f",&b);
c = a*b;
printf("area of rectangle is: %f\n",c);
d = 2*(a + b);
printf("perimeter of rectangle is: %f",d);
  getch();
}
