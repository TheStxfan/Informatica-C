#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"

#define MAXSIZE 100

typedef enum {M, F} genere;
typedef char str[MAXSIZE];
typedef struct{
    str nome, cognome;
    int eta;
    genere sesso;
} persona;
    
typedef struct{
    persona v[MAXSIZE];
    int n;
} agenda ;

// agenda init(){
//     agenda a;
//     a.n=0;
//     return a;
// }

void init2(agenda *a){
    // (*a).n=0;
    a->n=0;
}

persona leggiP(){
    persona p;

    printf("Nome                : "); scanf("%s", p.nome);
    printf("Cognome             : "); scanf("%s", p.cognome);
    printf("Eta'                : "); scanf("%d", &p.eta);
    printf("Sesso (M:%d/F:%d)     : ", M, F); scanf("%d", &p.sesso);


    return p;
}

void stampaP(persona p){
    printf("%s %s (%d) %c\n", p.nome, p.cognome, p.eta, p.sesso==M?'M':'F');
}

void aggiungiP(agenda *a){
    (*a).v[(*a).n++] = leggiP();
}

void stampaA(agenda *a){
    int i;
    for(i=0;i<(*a).n;i++) {
        stampaP((*a).v[i]);
    }
}

void cerca(agenda *a, str txtNome){
    int i;

    for(i=0;i<(*a).n;i++) {
        if (!strcmp(txtNome, (*a).v[i].nome) || !strcmp(txtNome, (*a).v[i].cognome)) {
            stampaP((*a).v[i]);
        }
    }
}

void cancella(agenda *a, str txtNome, str txtCognome){
    int i, j;

    for (i=(*a).n-1;i>=0;i--) {
        if (!strcmp(txtNome, (*a).v[i].nome) && !strcmp(txtCognome, (*a).v[i].cognome)) {

            printf("\nCancellato: %s %s (%d) %c\n", (*a).v[i].nome, (*a).v[i].cognome, (*a).v[i].eta, (*a).v[i].sesso==M?'M':'F');

            for (j=i;j<(*a).n-1;j++) {
                (*a).v[j] = (*a).v[j+1];
            }

            (*a).n--;
        }
    }
}