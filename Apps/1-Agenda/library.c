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

void init2(agenda *a);

persona leggiP();
void stampaP(persona p);
void aggiungiP(agenda *a);
void stampaA(agenda *a);
void cerca(agenda *a, str txtNome);
void cancella(agenda *a, str txtNome, str txtCognome);