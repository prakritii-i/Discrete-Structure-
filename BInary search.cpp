#include <stdio.h>

// Function to perform binary search recursively
int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // If the target is found at the middle
        if (arr[mid] == target)
            return mid;

        // If the target is smaller than the middle element, search the left subarray
        if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);

        // If the target is larger than the middle element, search the right subarray
        return binarySearch(arr, mid + 1, high, target);
    }

    // If the target is not present in the array
    return -1;
}

int main() {
    int n, target;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the sorted array elements
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    // Perform binary search and display the result
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result+1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

