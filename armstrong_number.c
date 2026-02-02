#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Function to count number of digits
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

// Function to calculate the Armstrong value
int powerValue(int n, int count) {
    int sum = 0, digit;
    while (n != 0) {
        digit = n % 10;              // get last digit
        sum = sum + pow(digit, count); // add digit^count
        n = n / 10;                  // remove last digit
    }
    return sum;
}

// Main function
int main() {
    int num, digits, result;
    scanf("%d", &num);

    digits = countDigits(num);        // count digits
    result = powerValue(num, digits); // calculate sum of powers

    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
