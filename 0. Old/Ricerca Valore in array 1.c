#include <stdio.h>
#include <stdlib.h>

// Si cerca se un valore e' presente nell'array v.

// Ricerca dicotomica o binaria: metodo piu' efficiente, divisione a meta'.

void main() {

    int v[100];
    int n = 0, i, ris = -1, x;

    scanf("%d", &x);

    while (x != 0) {
        v[n++] = x;
        scanf("%d", &x);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\nInserisci il valore da cercare: ");
    scanf("%d", &x);

    // Versione non ottimizzata

    // for (i = 0; i < n; i++) {
    //     if (v[i] == x) {
    //         ris = i;
    //     }
    // }

    // Ottimizzazione con while invece del for

    i = 0;
    while (i < n && ris == -1) {
        if (v[i] == x) {
            ris = i;
        }
        i++;
    }

    if (ris == -1) {
        printf("Non trovato");
    } else {
        printf("Trovato in posizione %d\n\n", ris);
    }

}