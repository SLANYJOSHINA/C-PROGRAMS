#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sq = n * n;
    int d = 1;
    int temp = n;

    while (temp > 0) {
        d *= 10;
        temp /= 10;
    }

    if (sq % d == n) {
        printf("Given number is Automorphic number");
    } else {
        printf("Given number is not an Automorphic number");
    }

    return 0;
}
