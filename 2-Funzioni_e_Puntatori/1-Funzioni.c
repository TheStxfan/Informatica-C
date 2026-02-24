#include <stdio.h>
#include <stdlib.h>

typedef char str[100];

void stampa(str prompt, int x) {
    printf("%d\n", x);
}

int leggi(str prompt) {
    int x;
    printf("%s: ", prompt);
    scanf("%d", &x);
    return x;
}

int somma(int x, int y) {
    return x + y;
}

int inc(int* x) {
    stampa("inc1", *x);
    (*x)++;
    stampa("inc2", *x);
}

void main() {
    int a, b, c, d = 5;
    a = leggi("Inserisci A");
    b = leggi("Inserisci B");
    c = somma(a, b);

    stampa("Somme = ", c);

    inc(&d);

    printf("\n\n");
}