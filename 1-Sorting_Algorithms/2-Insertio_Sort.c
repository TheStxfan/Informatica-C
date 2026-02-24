#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
    int n = 0, x, v[SIZE], j, i;

    scanf("%d", &x);

    while (x != 0 && n < SIZE) {

        for (j = n - 1; j >= 0 && v[j] > x; j--) {
            v[j + 1] = v[j]; 
        }
        
        v[j+1] = x;
        n++;

        scanf("%d", &x);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    return 0;
}