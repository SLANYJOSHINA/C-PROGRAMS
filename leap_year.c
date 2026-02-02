#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);

    if (y % 4 == 0) {
        if (y % 400 == 0 || y % 100 != 0) {
            printf("Given year is leap year");
        } else {
            printf("Given year is not leap year");
        }
    } else {
        printf("Given year is not leap year");
    }

    return 0;
}
