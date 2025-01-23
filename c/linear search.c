#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array after knowing its size

    printf("Enter the key element: ");
    scanf("%d", &k);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < n; j++) {
        if (arr[j] == k) {
            printf("Element found at index: %d\n", j);
            break; // Exit the loop once the element is found
        }
    }

    if (j == n) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
