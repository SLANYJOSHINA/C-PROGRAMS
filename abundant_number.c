#include <stdio.h>
int main() {
    int n, p = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            p = p + i;
        }
    }

    if (p > n) {
        printf("Given number is abundant number");
    } else {
        printf("Given number is not abundant number");
    }

    return 0;
}
