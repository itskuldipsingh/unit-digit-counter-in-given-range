#include <stdio.h>

int main()
{
    // Declare the variables
    int n, m, i, u, c;
    c = 0; // Initialize counter to 0

    // Get the lower limit from the user
    printf("Enter lower limit:");
    scanf("%d", &n);

    // Get the upper limit from the user
    printf("Enter upper limit:");
    scanf("%d", &m);

    // Get the unit digit to find from the user
    printf("Unit digit to find:");
    scanf("%d", &u);

    // Print the range and unit digit
    printf("Numbers between %d and %d with unit digit %d:\n", n, m, u);

    // Loop from the lower limit to the upper limit
    for(i=n; i<=m; i++){
        // If the unit digit of the current number is equal to the user's input
        if (i % 10 == u){
            // Print the number
            printf("%d\t", i);
            // Increment the counter
            c++;
        }
    }

    // Print the total count of numbers with the specified unit digit
    printf("\nTotal numbers between %d and %d with unit digit %d: %d\n",n, m, u, c);

    return 0;
}
