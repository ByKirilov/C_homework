#include <stdio.h>
#include <stdlib.h>

char *i_strncat(char *dest, char *src, int count) {
    char *dest_start = dest;
    while (*dest) {
        dest++;
    }

    int dest_len = (int)(dest - dest_start);
    
    char *result = (char *)malloc(dest_len + count);
    int i;
    for (i = 0; i < dest_len; ++i) {
    	*(result + i) = dest_start[i];
    }
    for (int k = 0; k < count; ++k) {
    	*(result + k + i) = src[k];
    }
    return result;
}

int main(void) {
    char *test1 = "hello ";
    char *test2 = "world!";

    printf("%s\n", i_strncat(test1, test2, 4));
    return 0;
}
