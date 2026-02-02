#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int temp;
    temp = n;

    int r = 0;

    while (temp) {
        int c = 1;
        int p = temp % 10;
        temp /= 10;

        for (int j = 1; j <= p; j++) {
            c = c * j;
        }
        r += c;
    }

    if (r == n) {
        printf("Given number is a strong number");
    } else {
        printf("Given number is not a strong number");
    }

    return 0;
}
