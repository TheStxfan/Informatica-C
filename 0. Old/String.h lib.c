#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    typedef char string[100];
    string s1 = "Ciao";
    string s2 = "Mondo";
    string s3 = "Ciao";


    // 1. strlen
    printf("\nstrlen = %d", strlen(s1));

    // 2. strcpy
    printf("\n%s ", s1);
    strcpy(s1, s2);
    printf("%s", s1);

    // 3. strcmp
    printf("\n%d", strcmp(s2, s3));

    // 4. strcat
    printf("\n%s", strcat(s3, s2));

    printf("\n\n");

}