#include<stdio.h>
#include<conio.h>
int main (){
int a,b,c;
printf("enter 3 values:");
scanf("%d %d %d",&a,&b,&c);

if ((a>b)&&(a>c))
printf("larghest no. is %d\n",a);
else
if((b>a)&&(b>c))
printf("larghest no. is %d\n",b);
else
printf("larghest no. is %d\n",c);

}
