#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            printf("Majority element is: %d\n", arr[i]);
            break;
        }
    }

    if (i == n) {
        printf("No majority element found.\n");
    }

    return 0;
}
