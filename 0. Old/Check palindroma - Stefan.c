#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    typedef char string[100];
    string s1;
    int len, i = 0, pal = 1;

    do {
        scanf("%s", s1);
        len = strlen(s1);
    } while (len < 2);

    for (i; i < len/2; i++) {
        if (s1[i] != s1[len - i - 1]) {
            pal = 0;
        }
    }
    
    printf("Palindroma: %d", pal);
}