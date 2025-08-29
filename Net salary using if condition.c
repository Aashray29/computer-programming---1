#include <stdio.h>

int main() {
    int g;
    printf("enter gross salary : ");
    scanf("%d",&g);
    if(g>10000)
    {
    int n;
    n = g + (g/10) - (g*0.03) ;
    printf("net salary is : %d ",n);
    }
    else{
    int j;
    j = g + (g*0.07) - (g*0.02);
    printf("net salary is : %d",j);
    }

    return 0;
}
