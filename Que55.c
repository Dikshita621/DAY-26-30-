/*Q55: Write a program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool is_prime;

    // Ask user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through each number from 2 to n
    for (i = 2; i <= n; i++) {
        is_prime = true;

        // Check if i is prime by testing divisibility up to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        // If prime, print the number
        if (is_prime) {
            printf("%d ", i);
        }
    }

    return 0;
}
