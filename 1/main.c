#include <stdio.h>

int main(void) {
    float a;
    float b;
    float c;

    scanf("%f %f %f", &a, &b, &c);

    if (a+b<c || a+c<b || c+b<a) {
        printf("False\n");
        return 0;
    }

    if (a*a + b*b - c*c < 0.0000000000000001
        || a*a + c*c - b*b < 0.0000000000000001
        || c*c + b*b - a*a < 0.0000000000000001) {
        printf("True\n");
        return 0;
    }
    printf("False\n");
    return 0;
}