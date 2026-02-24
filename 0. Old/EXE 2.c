#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void main() {

    int v[SIZE];
    int x, n = 0, i = 0;

    scanf("%d", &x);
    
    while (x != 0) {
        v[n++] = x;
        scanf("%d", &x);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    printf("\n\n");
}