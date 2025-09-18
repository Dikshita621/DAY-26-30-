/*Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read n elements into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }
    
    // Print the sum of the array elements
    printf("%d", sum);
    
    return 0;
}
