#include <stdio.h>
#include <stdlib.h>

#define DIM 100

void main() {

    int arr[DIM], i=0, k=0;

    do {
        scanf("%d", &arr[i]);
        i++;
    } while (arr[i-1] != 0);

    for (k; k < i -1; k++) {
        printf("%d ", arr[k]);
    }

    printf("\n\n");
}