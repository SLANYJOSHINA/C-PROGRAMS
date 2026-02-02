#include <stdio.h>
#include <math.h>


void prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("Not Prime Number");
            return;
        }
    }
    printf("Prime Number");
}

int main() {
    int n;
    scanf("%d", &n);

    prime(n);

    retur
