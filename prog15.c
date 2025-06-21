/*Print a pattern of stars (*) like this using a for loop

*  
**  
***  
****  
*****  

   */

#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Outer loop for rows
    int i,j;
    for ( i = 1; i <= n; i++) {
        // Inner loop for printing stars
    
        for ( j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
