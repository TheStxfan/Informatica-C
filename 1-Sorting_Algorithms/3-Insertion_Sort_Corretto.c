#include <stdio.h>

#define SIZE 100

int main() {
    
    int n = 0, x, v[SIZE], i, j;

    scanf("%d", &x);
    while (x != 0 && n < SIZE) {
        v[n++] = x;
        scanf("%d", &x);
    }

    for (i = 1; i < n; i++) {
        x = v[i];
        j = i - 1;

        for (j; j >= 0 && v[j] > x; j--) {
            v[j + 1] = v[j];
        }

        v[j + 1] = x;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\n");

    return 0;
}
