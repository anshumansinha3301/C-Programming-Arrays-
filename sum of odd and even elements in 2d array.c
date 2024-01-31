#include <stdio.h>

#define ROWS 3  
#define COLS 4   

int main() {
    int array[ROWS][COLS];
    int i, j, sumEven = 0, sumOdd = 0;

    printf("Enter elements for the 2D array (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (array[i][j] % 2 == 0) {
                sumEven += array[i][j];
            } else {
                sumOdd += array[i][j];
            }
        }
    }
    printf("\nEntered 2D array is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of even elements in the array: %d\n", sumEven);
    printf("Sum of odd elements in the array: %d\n", sumOdd);

    return 0;
}
