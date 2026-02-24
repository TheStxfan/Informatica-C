#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {

    int i = 0, j = 0, n = 0, t, x, v[SIZE];

    scanf("%d", &x);

    while (x != 0) {
        v[n++] = x;
        scanf("%d", &x);
    }

    for (i; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (v[j] < v[i]) {
                t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\n");

    return 0;
}