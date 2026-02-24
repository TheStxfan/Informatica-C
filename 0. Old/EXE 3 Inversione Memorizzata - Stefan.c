#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void main() {

    int v[SIZE];
    int x, n = 0, i = 0, tmp;

    scanf("%d", &x);
    
    while (x != 0) {
        v[n++] = x;
        scanf("%d", &x);
    }

    x = 0;
    for (i = n - 1; i >= n /2; i--) {
        tmp = v[x];
        v[x] = v[i];
        v[i] = tmp;
        x++;
    }

    for (x = 0; x < n; x++) {
        printf("%d ", v[x]);
    }

    printf("\n\n");
}