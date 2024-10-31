#include <stdio.h>
#define SIZE 100


int main(void) {
    //  24. Write a program in C to find the sum of the left diagonals of a matrix.
    int sizeOfMatrix, m = 0, sum = 0, arr[SIZE][SIZE];
    printf("\nInput the size of square matrix: ");
    scanf("%d", &sizeOfMatrix);

    printf("\nInput elements in the first matrix: ");

    m = sizeOfMatrix;

    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            printf("\nElement-[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < sizeOfMatrix; i++) {
        m = m-1;
        for (int j = 0; j < sizeOfMatrix; j++) {
            if (j == m) {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("\n Addition of the left Diagonal elements is: %d", sum);


    return 0;
}
