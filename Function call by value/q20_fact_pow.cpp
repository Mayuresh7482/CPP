#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate power of a number
int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate sine value of an angle in radians
double sine(double x) {
    double sum = 0.0;
    int sign = 1;
    for(int i = 0; i < 5; i++) {
        sum += sign * power(x, 2*i+1) / factorial(2*i+1);
        sign = -sign; // Alternate the sign for each term
    }
    return sum;
}

int main() {
    double angleInDegrees;
    cout << "Enter the angle in degrees: ";
    cin >> angleInDegrees;

    // Convert the angle to radians
    double angleInRadians = angleInDegrees * M_PI / 180.0;

    // Calculate and print the sine value
    double sineValue = sine(angleInRadians);
    cout << "Sine value of " << angleInDegrees << " degrees is: " << sineValue << endl;

    return 0;
}
