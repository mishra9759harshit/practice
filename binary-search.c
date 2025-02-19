#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n]; // Corrected array declaration

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Binary Search Algorithm
    int left = 0, right = n - 1, mid, found = 0;

    while (left <= right) {
        mid = (left + right) / 2; // Find the middle index

        if (array[mid] == target) { // If found
            printf("Number %d found at index %d\n", target, mid);
            found = 1;
            break;
        } else if (array[mid] < target) { // Search right half
            left = mid + 1;
        } else { // Search left half
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
