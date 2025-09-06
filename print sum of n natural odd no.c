#include <stdio.h>
#include <conio.h>
int main(){
int n,i,sum = 0;
printf("enter the value of n :");
scanf("%d",&n);
for(i = 1; i<=n; i++){
sum = sum + (i*2 - 1);
}
printf("sum of first %d odd no. is : %d\n,n,sum);
getch();
}
