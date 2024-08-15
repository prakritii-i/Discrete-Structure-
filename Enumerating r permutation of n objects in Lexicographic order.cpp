 #include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse a portion of an array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// Function to print the permutation
void printPermutation(int arr[], int r) {
    for (int i = 0; i < r; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to generate the next lexicographically greater permutation
int nextPermutation(int arr[], int n, int r) {
    int i = r - 1;

    // Find the rightmost element that is smaller than its next element
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If no such element is found, all permutations have been generated
    if (i == -1) {
        return 0;
    }

    // Find the smallest element to the right of arr[i] that is greater than arr[i]
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Swap arr[i] and arr[j]
    swap(&arr[i], &arr[j]);

    // Reverse the elements to the right of arr[i]
    reverse(arr, i + 1, r - 1);

    return 1;
}

int main() {
    int n, r;

    // Input the values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Initialize an array to store the permutation
    int permutation[r];

    // Initialize the permutation array with the first permutation
    for (int i = 0; i < r; i++) {
        permutation[i] = i + 1;
    }

    // Enumerate and print permutations in lexicographic order
    do {
        printPermutation(permutation, r);
    } while (nextPermutation(permutation, n, r));

    return 0;
}

