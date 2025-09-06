  #include <stdio.h>
#include <conio.h>
int main() {
    int j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for( j= (n-1); j >=1; j--) {
        n = n * j; 
    }
    
    printf("factorial of n is  = %d\n", n);
    
    getch();
}
