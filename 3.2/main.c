#include <stdio.h>

char *i_strncat(char *dest, char *src, int count) {
    char *dest_start = dest;
    while (*dest) {
        dest++;
    }

    int dest_len = (int)(dest - dest_start + 1);;
    int i;
    for (i = 0 ; i < count && src[i] != '\0' ; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}

int main(void) {
    char *test1 = "hello ";
    char *test2 = "world!";

    printf("%s\n", i_strncat(test1, test2, 2));
    return 0;
}