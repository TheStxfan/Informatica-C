#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"

// NOTE: types (genere/str/persona/agenda) and MAXSIZE are defined in agenda.h

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
    a->v[a->n++] = leggiP();
}

void stampaA(agenda *a){
    for(int i = 0;i<a->n;i++) {
        stampaP(a->v[i]);
    }
}

void cerca(agenda *a, str txtNome){
    for(int i = 0;i<a->n;i++) {
        if (!strcmp(txtNome, a->v[i].nome) || !strcmp(txtNome, a->v[i].cognome)) {
            stampaP(a->v[i]);
        }
    }
}

void cancella(agenda *a, str Nome, str Cognome){
    for (int i = a->n - 1;i>=0;i--) {
        if (!strcmp(Nome, a->v[i].nome) && !strcmp(Cognome, a->v[i].cognome)) {

            printf("\nCancellato: %s %s (%d) %c\n", a->v[i].nome, a->v[i].cognome, a->v[i].eta, a->v[i].sesso==M?'M':'F');

            for (int j = i; j<a->n-1; j++) {
                a->v[j] = a->v[j+1];
            }

            a->n--;
        }
    }
}