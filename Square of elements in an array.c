#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Square of array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d^2 = %d\n", arr[i], arr[i] * arr[i]);
    }

    return 0;
}
