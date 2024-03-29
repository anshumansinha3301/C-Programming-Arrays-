#include <stdio.h>
 
int main() {
    int size, sumEven = 0, sumOdd = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int arr[size];
 
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
 
    
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    return 0;
}
