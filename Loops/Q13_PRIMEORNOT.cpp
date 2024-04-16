#include <iostream>

using namespace std;

int main()
{
// Take a number as input
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Initialize a count variable to 0
    int i, count = 0;

    // Run a loop from 2 to half of the input number
    for (i = 2; i <= num / 2; i++) {
        // Check if the input number is divisible by the current number
        if (num % i == 0) {
            // If it is, increment the count variable and break out of the loop
            count++;
            break;
        }
    }

    // After the loop, if the count variable is still 0, print that the number is prime
    if (count == 0)
        printf("%d is a prime number.\n", num);
    // Otherwise, print that the number is not prime
    else
        printf("%d is not a prime number.\n", num);

    // Return 0 to indicate successful execution
    return 0;
}