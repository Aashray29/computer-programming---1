#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d", &r1);
    scanf("%d", &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d", &r2);
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication NOT possible! (c1 must equal r2)\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], c[r1][c2];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant Matrix (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
