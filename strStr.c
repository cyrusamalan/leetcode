#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle) {
    int i, j, k;
    int n = strlen(haystack);
    int m = strlen(needle);
    if (m == 0) return 0;
    for (i = 0; i <= n-m; i++) {
        for (j = i, k = 0; k < m && haystack[j] == needle[k]; j++, k++);
        if (k == m) return i;
    }
    return -1;
}


int main() {
    char haystack[] = "Hello, world!";
    char needle[] = "world";
    int index = strStr(haystack, needle);
    printf("The index of the first occurrence of '%s' in '%s' is %d\n", needle, haystack, index);
    return 0;
}
