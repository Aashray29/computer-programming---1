#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("enter a value");
scanf("%d",&n);

int i = 0;
do
{
++i;
printf("%d\n",i);
}while(i<n);
}
