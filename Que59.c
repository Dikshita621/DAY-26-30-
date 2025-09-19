/*Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
*/
#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Print the result
    printf("Even=%d, Odd=%d\n", evenCount, oddCount);

    return 0;
}
