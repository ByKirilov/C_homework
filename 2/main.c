#include <stdio.h>

int main() {
    int d_count = 0;
    int l_count = 0;

    int c;

    while ((c = getc(stdin)) != EOF) {
        if (c > 47 && c < 58) {
            d_count++;
        }
        else if ((c > 64 && c < 91) || (c > 96 && c < 123)) {
            l_count++;
        }
    }

    printf("Digits: %d\n", d_count);
    printf("Latin symbols: %d\n", l_count);

    return 0;
}
