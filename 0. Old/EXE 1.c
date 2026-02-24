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

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}