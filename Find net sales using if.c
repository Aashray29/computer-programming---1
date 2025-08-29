#include <stdio.h>

int main() {
    int g;
    printf("enter gross sales : ");
    scanf("%d",&g);
    if(g>20000)
    {
    int n;
    n = g  - (g*0.15) ;
    printf("net sales is : %d ",n);
    }
    else if (g>10000){
    int j;
    j = g - (g*0.1);
    printf("net salee is : %d",j);
    }
    else
    {
    int p;
    p = g - (g*0.05);
  printf("net sales is : %d",p);  }

    return 0;
}
