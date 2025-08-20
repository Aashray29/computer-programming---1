#include<stdio.h>
#include<conio.h>
float main(){
  float r,a,p;
  clrscr();
printf("enter radius: ");
scanf("%f",&r);
a = (22*r*r)/7;
printf("area of circle is: %f\n",a);
p = (2*22*r)/7;
printf("perimeter of circle is: %f\n",p);
  getch();
}
