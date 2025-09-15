//Q51: Write a program to print the following pattern:
  /*  5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print numbers from (5 - i + 1) to 5
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
