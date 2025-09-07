#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 10 numbers:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (i == 1) {  
            largest = num;
            smallest = num;
        } else {
            if (num > largest)
                largest = num;
            if (num < smallest)
                smallest = num;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
