#include <stdio.h>

#define ROWS 2   
#define COLS 3  
int main() {
    int array[ROWS][COLS];
    int i, j, sum = 0;

    printf("Enter elements for the 2D array (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum += array[i][j];
        }
    }
    printf("\nEntered 2D array is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all elements in the array: %d\n", sum);
    return 0;}
