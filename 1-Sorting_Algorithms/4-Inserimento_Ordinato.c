#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
    int i, j, n = 0, y, x, v[SIZE];

    scanf("%d", &x);
    while (x != 0 && n < SIZE - 1) {
        v[n++] = x;
        scanf("%d", &x);
    }

    printf("\nNumero da inserire: ");
    scanf("%d", &y);

    i = 0;
    while (i < n && v[i] < y) {
        i++;
    }

    for (j = n; j > i; j--) {
        v[j] = v[j-1];
    }

    v[i] = y;
    n++; 

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    return 0;
}