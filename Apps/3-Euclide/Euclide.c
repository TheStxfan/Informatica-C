#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int A, B, temp;
	
	do {
		printf("Inserisci A: ");
		scanf("%d", &A);
		printf("Inserisci B: ");
		scanf("%d", &B);
	} while (A < 1 || B < 1);
	
	while (A % B != 0) {
		temp = B;
		B = A % B;
		A = temp;
	}
	
	printf("MCD: %d", B);
}