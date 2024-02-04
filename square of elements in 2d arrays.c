#include <stdio.h>

#define ROWS 3   
#define COLS 4   

int main() {
    int array[ROWS][COLS];
    int squaredArray[ROWS][COLS];  
    int i, j;

    printf("Enter elements for the 2D array (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            squaredArray[i][j] = array[i][j] * array[i][j];
        }
    }
    printf("\nEntered 2D array is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\nArray of squares is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", squaredArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
