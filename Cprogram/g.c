#include <stdio.h>

// Function to swap elements at given positions
void swapElements(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int main() {
    int n;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Get elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get positions to swap
    int pos1, pos2;
    printf("Enter positions to swap (0 to %d): ", n - 1);
    scanf("%d %d", &pos1, &pos2);

    // Check if positions are valid
    if (pos1 >= 0 && pos1 < n && pos2 >= 0 && pos2 < n) {
        // Swap elements
        swapElements(arr, pos1, pos2);

        // Display the updated array
        printf("Array after swapping elements:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid positions entered.\n");
    }

    return 0;
}
