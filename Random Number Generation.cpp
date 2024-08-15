#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, lower, upper;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the lower and upper bounds for your random number
    lower = 1;
    upper = 100;  // You can adjust these values as needed

    // Generate a random number between lower and upper (inclusive)
    n = (rand() % (upper - lower + 1)) + lower;

    printf("Random number: %d\n", n);

    return 0;
}

