#include <stdio.h>

// Function to print the combination
void printCombination(int arr[], int r) {
    for (int i = 0; i < r; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to generate next lexicographically greater combination
int nextCombination(int arr[], int n, int r) {
    int i = r - 1;

    // Find the rightmost element that can be incremented
    while (i >= 0 && arr[i] == n - r + i + 1) {
        i--;
    }

    // If no such element is found, all combinations have been generated
    if (i == -1) {
        return 0; // Signal that there are no more combinations
    }

    // Increment the found element
    arr[i]++;

    // Update the remaining elements
    for (int j = i + 1; j < r; j++) {
        arr[j] = arr[j - 1] + 1;
    }

    return 1; // Signal that a new combination has been generated
}

int main() {
    int n, r;

    // Input the values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Initialize an array to store the combination
    int combination[r];

    // Initialize the combination array with the first combination
    for (int i = 0; i < r; i++) {
        combination[i] = i + 1;
    }

    // Enumerate and print combinations in lexicographic order
    do {
        printCombination(combination, r);
    } while (nextCombination(combination, n, r));

    return 0;
}

