#include <stdio.h>

int main(void) {
    int squares[10][10];

    for (int *ptr = &squares[0][0], x = 0, y = 0; y < 10; ++x) {
        *(ptr + x + 10 * y) = (x + 10 * y) * (x + 10 * y);
        if (x == 9) {
            x = -1;
            y++;
        }
    }

    printf("     ");
    for (int i = 0; i < 10; ++i) {
        printf("%5d ", i);
    }
    printf("\n");
    for (int *ptr = &squares[0][0], i = 0; i < 10 * 10; ++i) {
        if (i % 10 == 0) {
            printf("%5d ", i / 10);
        }
        printf("%5d ", *(ptr + i));

        if (i % 10 == 9) {
            printf("\n");
        }
    }

    return 0;
}