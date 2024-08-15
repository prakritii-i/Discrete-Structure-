#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to be searched
    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result+1);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

