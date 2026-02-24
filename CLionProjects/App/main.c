#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

void main (){

    typedef enum {AGGIUNGI=1,STAMPA=2,CERCA=3,CANCELLA=4,ESCI=0} azione;    
    
    agenda a;
    azione scelta;
    persona p;
    str txtNome, txtCognome;

    // a=init();
    init2(&a);

    do{
        printf("\n---------\n\n%d) AGGIUNGI\n%d) STAMPA\n%d) CERCA\n%d) CANCELLA\n%d) ESCI\n\n", AGGIUNGI, STAMPA, CERCA, CANCELLA, ESCI);
    
        scanf("%d", &scelta);
        printf("\n");
        
        switch(scelta) {
            case AGGIUNGI:

                aggiungiP(&a);

                break;

            case STAMPA:

                stampaA(&a);

                break;

            case CERCA:

                printf("Nome/Cognome : "); scanf("%s", txtNome);
                printf("\n");

                cerca(&a, txtNome);

                break;

            case CANCELLA:

                printf("Nome    : "); scanf("%s", txtNome);
                printf("Cognome : "); scanf("%s", txtCognome);
                printf("\n");

                cancella(&a, txtNome, txtCognome);    

                break;
        } 
    } while(scelta != ESCI);
}