#include <stdio.h>

int main() {
    int count = 1;   
    int num = 2;   
    int n;
    printf("enter number ");  
    scanf("%d",&n);

    while (count <= n) {
        printf("%d ", num);
        num += 2;    
        count++;
    }

    return 0;
}
