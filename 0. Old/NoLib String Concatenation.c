#include <stdio.h>
#include <stdlib.h>

void main() {

    typedef char string[100];
    string s1, s2;
    int i = 0, j = 0;

    scanf("%s %s", s1, s2);

    while (s1[i] != 0) i++;

    for (j; s2[j] != 0; j++) {
        s1[i] = s2[j];
        i++;
    }

    s1[i] = 0;
    
    printf("%s", s1);

    printf("\n\n");
}