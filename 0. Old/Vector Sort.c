#include <stdio.h>
#include <stdlib.h>

#define DIM 5

void main() {

    typedef int vector[DIM];

    vector arr;
    int pass, i, temp, swapped;

    for (i = 0; i < DIM; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        for (pass = 0; pass < DIM - 1; pass++) {
            swapped = 0;

            for (i = 0; i < DIM - pass - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swapped = 1;
                }
            }
        }
    } while (swapped);

    for (i = 0; i < DIM; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
}