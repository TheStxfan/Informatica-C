#include <stdio.h>
#include <stdlib.h>

#define DIM 100

void main() {

    int x, b, n, i = 0, arr[DIM];

    do {
        printf("Enter X: ");
        scanf("%d", &x);
    } while (!(x > 0));

    do {
        printf("Enter B: ");
        scanf("%d", &b);
    } while (!(b >= 2 && b <= 16));

    while (x > 0) {
        arr[i] = x % b;
        x /= b;
        i++;
    }

    printf("\n");
    
    for (x = i - 1; x >= 0; x--) { 
        if (arr[x] >= 0 && arr[x] <= 9) {
            printf("%d", arr[x]);
        } else {
            printf("%c", 'A' + (arr[x] - 10));
        }
    }

    printf("\n\n");

}