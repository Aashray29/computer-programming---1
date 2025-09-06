  #include <stdio.h>
#include <conio.h>
char main() {
    char n[10];
    int j;
    printf("Enter your name: ");
    scanf("%s", &n);
    printf("Enter number: ");
    scanf("%d", &j);
    
    int i;
    for(i = 1; i<=j; i++) {
    
    printf("your name  is  = %s\n", n);
    }
    getch();
}
