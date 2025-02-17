#include <ctype.h>
#include <stdio.h>

/*
TRACCIA 1
Sviluppare una function C che, dati come parametri di input un array di int e il suo size,
determina  e  restituisce  come  parametro  di  output  il  secondo più  grande elemento dell’array(N.B.:nonbisogna seguire l’idea di ordinare primal’array).
 */
int secondoMax(int array[], int dim);


/*
TRACCIA 2
Sviluppare una function C che, dato come parametro di input un array di tipo struct punto double x; double y;
e il suo size, determina e restituisce come parametri di output  gli indici dei  due  punti che hanno distanza minima tra loro.
I campi x e y contengono l’ascissa e l’ordinata, rispettivamente, di un punto.
 */
#include <math.h>

typedef struct {
    double x;
    double y;
} PuntoMin;

void distmin(PuntoMin punti[], int dim);


/*
TRACCIA 3
Sviluppare una function C che, dato come parametro di input un array di tipo struct puntodouble x; double y;
e il suo size, determina e restituisce come parametro dioutput  lamassima  distanza  tra  i  punti.
I  campi xe ycontengono  l’ascissa  e l’ordinata, rispettivamente, di un punto
 */
#include <math.h>

typedef struct {
    double x;
    double y;
} PuntoMax;

void distmax(PuntoMax punti[], int dim);


/*
TRACCIA 4
Sviluppare una function C che, dati come parametri di input un array2D di double, il numero delle righe e il numero delle colonne,
determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni colonna.
 */
double somm_colonne(double array[][3], int colonne, int righe);


/*
TRACCIA 5
Sviluppare  una  function  C  che,
dati  come  parametri  di  input  un array 2D  di int,  il numerodelle righe e il numero delle colonne,
determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni riga.
 */
double somm_riga(double array[][3], int colonne, int righe);


/*
TRACCIA 6
Scrivere  una  funzione  che  dati  in  input  due array ordinati(rispetto  al  campo matricola)
di elementi della seguente struttura struct studente {char *nome; char *cognome; int matricola;};
restituisca in output l’array fusione dei due array. La fusione deve avvenire in base alcampo matricola
 */
struct Studente {
    char *nome;
    char *cognome;
    int matricola;
};

void fusione_studenti(struct Studente array1[], int dim1, struct Studente array2[], int dim2,
                      struct Studente array_fuso[]);


/*
TRACCIA 7
Scrivere una funzione che dati in input due array di strutture del seguente tipo struct prodotto {char *nome; int codice; double prezzo;};
restituisce in output 1 se i due array di struct sono uguali, 0 se non lo sono.
Si noti che due dati struct sono uguali se sono uguali tutti i loro campi
 */
typedef struct {
    char *nome;
    int codice;
    double prezzo;
} prodotto;

int controllo_due_array_prodotto(prodotto prodotto1[], int dim1, prodotto prodotto2[], int dim2);


/*
TRACCIA 8
Sviluppare una function C che,
data come parametro di input una stringa che rappresenta un testo in italiano,
determina e restituisce come parametro di output il numero di parole di tre lettere contenute nel testo.
Nel testo le parole sono separate da un unico spazio.
 */
#include <string.h>

int calcola_parole_tre_lettere(char *stringa);


/*
TRACCIA 9
Sviluppare  una  function  C  che, data  come  parametro  di  input  una  stringa  che rappresentaun  testo  in  italiano,
determina e  restituisce  come  parametro  di  output  il numero  di  parole che terminano  in are contenute nel testo.
Nel  testo  le  parole  sono separate da un unico spazio.
 */
#include <string.h>

int calcola_parole_are(char *stringa);


/*
TRACCIA 10
Sviluppare  una  function  C  che,
data  come  parametro  di input  una  stringa  che rappresentaun  testo  in  italiano,
determina  e  restituisce  come  parametro  di  output  il numero di paroleche iniziano con a e terminano con e contenute nel testo.
Nel testo le parole sono separateda un unico spazio.
 */
int calcola_parole_inizioA_fineE(char *stringa);


/*
TRACCIA 11
Sviluppare  una  function  C  che,
data  come  parametro  di  input  una  stringa  che rappresenta un  testo  in  italiano,
determina  e  restituisce  come parametro di output il numero delle parole  contenute  nel  testo
che  hanno  almeno 5 vocali.
Nel  testo  le parole sono separateda un unico spazio.
 */
int controllo_vocale_parole_testo(char *stringa);


/*TRACCIA 12
Sviluppare una function C che,
data come parametro di input una stringa che rappresenta un testo in italiano,
determina e restituisce come parametri di output la parola di lunghezza massima contenuta nel testo e la sua lunghezza.
Nel testo le parole sono separate da un unico spazio. */
void controllo_parola_lunghezza_massima(char *stringa);


/*TRACCIA 13
Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la sua lunghezza.
Nel testo le parole sono separate da un unico spazio. */
void controllo_parola_lunghezza_minima(char *stringa);

/*
 TRACCIA 14
 Sviluppare una function C che, data come parametro di input una stringa che rappresenta un testo in italiano,
 determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la posizione di inizio della parola nella stringa.
 Nel testo le parole sono separate da un unico spazio. */
int controllo_parola_lunghezza_minima_posizione(char *stringa);

/*TRACCIA 15
 Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
 determina e restituisce come parametro di output l�array
 (di size 21) del numero delle occorrenze delle 21 lettere dell'alfabeto italiano
 (per es. il numero di occorrenze della lettera a � il numero di volte in cui la lettera a compare nel testo). */
void controllo_occorrenze_alfabeto(char *stringa);


/*TRACCIA 16
Sviluppare una function C che, dati come parametri di input un array di char e il suo size, determina e restituisce come parametro di output l'array occorrenze (di size 21)
del numero delle occorrenze dell'evento a precede ognuna delle 21 lettere dell'alfabeto italiano (cio�occorrenze[0] � il numero di volte in cui accade che �a precede a�,
cio� che nel testo compare aa, occorrenze[1] � il numero di volte     in cui accade che �a precede b�, cio� che nel testo compare ab, occorrenze[2] � il numero di volte in cui
accade che a precede c, cio� che nel testo compare ac, �). */
void controllo_occorrenze_alfabeto_ab_ac_ecc(char *stringa);


/*
TRACCIA 17
Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
determina e  restituisce  come  parametro  di  un  dato  logico  che  indica  se  il
testo nell’arrayèun pangramma, ovvero èun testo che contiene, almeno una volta, tutte
le 21 letteredell’alfabeto italiano.
 */
void controllo_pangramma(char *stringa, int dim);


/*TRACCIA 18
 Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
 determina e restituisce come parametro di output il carattere più frequente. */
char controllo_carattere_piu_frequente(char *stringa, int dim);


int main(void) {
    //Traccia 1
    int arraySecondoMax[] = {2, 3, 4, 5};
    int c = secondoMax(arraySecondoMax, 3);
    printf("--TRACCIA 1--\n");
    printf("Il secondo numero piu grande e %d\n", c);

    printf("\n");


    //Traccia 2
    printf("--TRACCIA 2--\n");
    PuntoMin puntiMin[4] = {
        {1.0, 2.0},
        {3.5, 4.5},
        {5.0, 6.0},
        {7.5, 8.5}
    };
    distmin(puntiMin, 4);

    printf("\n");

    // Traccia 3
    printf("--TRACCIA 3--\n");
    PuntoMax puntiMax[6] = {
        {2.0, 5.0},
        {3.4, 4.2},
        {5.1, 6.3},
        {7.5, 8.1}
    };
    distmax(puntiMax, 4);

    printf("\n");

    //Traccia 4
    printf("--TRACCIA 4--\n");
    double arraySommCol[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };
    double r_colonna = somm_colonne(arraySommCol, 3, 3);
    printf("Somma colonne massima [%2.2f]\n", r_colonna);

    printf("\n");

    //Traccia 5
    printf("--TRACCIA 5--\n");
    double arraySommRiga[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };
    double r_riga = somm_riga(arraySommRiga, 3, 3);
    printf("Somma riga massima [%2.2f]\n", r_riga);

    printf("\n");

    //Traccia 6
    printf("--TRACCIA 6--\n");

    struct Studente array1Studenti[] = {
        {"Mario", "Rossi", 1001},
        {"Luca", "Bianchi", 1002},
        {"Giulia", "Verdi", 1003}
    };

    struct Studente array2Studenti[] = {
        {"Anna", "Neri", 2001},
        {"Paolo", "Gialli", 2002},
        {"Elena", "Blu", 2003}
    };

    struct Studente array3FusoStudenti[6] = {};

    fusione_studenti(array1Studenti, 3, array2Studenti, 3, array3FusoStudenti);

    for (int i = 0; i < 6; i++) {
        printf("Nome [%s]\n", array3FusoStudenti[i].nome);
        printf("Cognome [%s]\n", array3FusoStudenti[i].cognome);
        printf("Matricola [%d]\n", array3FusoStudenti[i].matricola);
        printf("\n");
    }


    //Traccia 7
    printf("--TRACCIA 7--\n");
    prodotto prodotto1[] = {
        {"Mela", 101, 0.99},
        {"Banana", 102, 1.29},
        {"Pera", 103, 1.49}
    };

    prodotto prodotto2[] = {
        {"Arancia", 201, 1.19},
        {"Fragola", 202, 2.49},
        {"Ciliegia", 203, 3.59}
    };

    int r_controllo_prodotto = controllo_due_array_prodotto(prodotto1, 3, prodotto2, 3);
    printf("Gli array sono [%d]\n", r_controllo_prodotto);

    printf("\n");

    //Traccia 8
    printf("--TRACCIA 8--\n");
    char stringa_tre_lettere[] = "tre rew wer qwr";
    int r_controllo_parole_tre_lettere = calcola_parole_tre_lettere(stringa_tre_lettere);
    printf("Le parole con tre lettere sono [%d]\n", r_controllo_parole_tre_lettere);

    printf("\n");

    //Traccia 9
    printf("--TRACCIA 9--\n");
    char stringa_are[] = "fare affermare orrore";
    int r_controllo_parole_are = calcola_parole_are(stringa_are);
    printf("Le parole con tre lettere sono [%d]\n", r_controllo_parole_are);

    printf("\n");

    //Traccia 10
    printf("--TRACCIA 10--\n");
    char stringa_inizioA_fineE[] = "fare affermare orrore";
    int r_controllo_parole_inizioA_fineE = calcola_parole_inizioA_fineE(stringa_inizioA_fineE);
    printf("Le parole che iniziano con a finiscono con e sono [%d]\n", r_controllo_parole_inizioA_fineE);

    printf("\n");


    //Traccia 11
    printf("--TRACCIA 11--\n");
    char stringa_vocali_parole[] = "aeiou affermare aeiou";
    int r_controllo_parole_vocali = controllo_vocale_parole_testo(stringa_vocali_parole);
    printf("Le parole che hanno almeno 5 vocali sono [%d]\n", r_controllo_parole_vocali);

    printf("\n");


    //Traccia 12
    printf("--TRACCIA 12--\n");
    char stringa_lunghezza_massima[] = "aeiou affermare aeiou";
    controllo_parola_lunghezza_massima(stringa_lunghezza_massima);

    printf("\n");

    //Traccia 13
    printf("--TRACCIA 13--\n");
    char stringa_lunghezza_minima[] = "aeiou affermare aei";
    controllo_parola_lunghezza_minima(stringa_lunghezza_minima);

    printf("\n");

    //Traccia 14
    printf("--TRACCIA 14--\n");
    char stringa_lunghezza_minima_posizione[] = "marioz ao e";
    int r_controllo_parola_minima_posizione = controllo_parola_lunghezza_minima_posizione(
        stringa_lunghezza_minima_posizione);
    printf("La parola minima si trova in posizione [%d]\n", r_controllo_parola_minima_posizione);
    printf("\n");


    //Traccia 15
    printf("--TRACCIA 15--\n") ;
    char stringa_lunghezza_occorrenze[] = "mariozaoeaz";
    controllo_occorrenze_alfabeto(stringa_lunghezza_occorrenze);
    printf("\n");


    //Traccia 16
    printf("--TRACCIA 16--\n");
    char controllo_occorrenze_alfabeto_ab_ac_ecc_array[] = "mariozaoeaz";
    controllo_occorrenze_alfabeto_ab_ac_ecc(controllo_occorrenze_alfabeto_ab_ac_ecc_array);
    printf("\n");


    //Traccia 17
    printf("--TRACCIA 17--\n");
    char controllo_pangramma_str[] = "Qui gli ampi stronzi, bove, defechi?";
    controllo_pangramma(controllo_pangramma_str, 100);
    printf("\n");


    //Traccia 18
    printf("--TRACCIA 18--\n");
    char controllo_carattere_piu_frequente_str[] = "Qualche vago ione tipo zolfo, bromo, sodio";
    controllo_carattere_piu_frequente(controllo_carattere_piu_frequente_str, 100);
    printf("\n");


    return 0;
}

/*
TRACCIA 1
Sviluppare una function C che, dati come parametri di input un array di int e il suo size,
determina  e  restituisce  come  parametro  di  output  il  secondo più  grande elemento dell’array(N.B.:nonbisogna seguire l’idea di ordinare primal’array).
 */
//Traccia 1
int secondoMax(int array[], int dim) {
    int max = 0;
    int secondoMax = 0;

    for (int i = 0; i < dim; i++) {
        if (array[i] > max) {
            max = array[i];
            secondoMax = max;
        }
    }

    return secondoMax;
}


/*
TRACCIA 2
Sviluppare una function C che, dato come parametro di input un array di tipo struct punto double x; double y;
e il suo size, determina e restituisce come parametri di output  gli indici dei  due  punti che hanno distanza minima tra loro.
I campi x e y contengono l’ascissa e l’ordinata, rispettivamente, di un punto.
 */
//Traccia 2
double calcola_dist_min(PuntoMin p1, PuntoMin p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void distmin(PuntoMin punti[], int dim) {
    if (dim >= 2) {
        double dist;
        double dist_min = -1.0;
        int p1 = 0;
        int p2 = 0;
        for (int i = 0; i < dim - 1; i++) {
            for (int j = 0; j < dim; j++) {
                dist = calcola_dist_min(punti[i], punti[j]);
                if (dist_min < dist) {
                    p1 = i;
                    p2 = j;
                    dist_min = dist;
                }
            }
        }
        printf("P1[%d] P2[%d]\nDistanza[%1.1f]\n", p1, p2, dist_min);
    } else {
        printf("Sono neccesari 2 punti per il calcolo della distanza minima!!\n");
    }
}


/*
TRACCIA 3
Sviluppare una function C che, dato come parametro di input un array di tipo struct punto double x; double y;
e il suo size, determina e restituisce come parametro di output  la massima  distanza  tra  i  punti.
I  campi xe ycontengono  l’ascissa  e l’ordinata, rispettivamente, di un punto
 */

//Traccia 3
double calcola_dist_max(PuntoMax p1, PuntoMax p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void distmax(PuntoMax punti[], int dim) {
    if (dim >= 2) {
        double dist_max = 0.0;
        double dist;
        int p1 = 0;
        int p2 = 0;
        for (int i = 0; i < dim - 1; i++) {
            for (int j = 0; j < dim; j++) {
                dist = calcola_dist_max(punti[i], punti[j]);
                if (dist > dist_max) {
                    p1 = i;
                    p2 = j;
                    dist_max = dist;
                }
            }
        }
        printf("P1[%d] P2[%d]\nDistanza[%1.1f]\n", p1, p2, dist_max);
    } else {
        printf("Sono neccesari 2 punti per il calcolo della distanza minima!!\n");
    }
}

/*
TRACCIA 4
Sviluppare una function C che, dati come parametri di input un array2D di double, il numero delle righe e il numero delle colonne,
determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni colonna.
 */
//Traccia 4
double somm_colonne(double array[][3], int colonne, int righe) {
    double somm = 0.0;
    double max = 0;
    for (int i = 0; i < colonne; i++) {
        for (int j = 0; j < righe; j++) {
            somm += array[j][i];
        }
        if (somm > max) {
            max = somm;
            somm = 0.0;
        }
    }

    return max;
}


/*
TRACCIA 5
Sviluppare  una  function  C  che,
dati  come  parametri  di  input  un array 2D  di int,  il numerodelle righe e il numero delle colonne,
determina e restituisce come parametro di output ilmassimotra le somme degli elementi di ogni riga.
 */
double somm_riga(double array[][3], int colonne, int righe) {
    double somma = 0;
    double max_riga = 0.0;
    for (int i = 0; i < colonne; i++) {
        for (int j = 0; j < righe; j++) {
            somma += array[i][j];
        }

        if (somma > max_riga) {
            max_riga = somma;
            somma = 0.0;
        }
    }

    return max_riga;
}


/*
TRACCIA 6
Scrivere  una  funzione  che  dati  in  input  due array ordinati(rispetto  al  campo matricola)
di elementi della seguente struttura struct studente {char *nome; char *cognome; int matricola;};
restituisca in output l’array fusione dei due array. La fusione deve avvenire in base alcampo matricola
 */

//NOTA BENE NELLE TRACCE SU MGEA struct non c'e SCRITTO INTENDO
void fusione_studenti(struct Studente array1[], int dim1, struct Studente array2[], int dim2,
                      struct Studente array_fuso[]) {
    int i_A = 0;
    int i_B = 0;
    int i_C = 0;

    while (i_A < dim1 && i_B < dim2) {
        if (array1[i_A].matricola < array2[i_B].matricola) {
            array_fuso[i_C] = array1[i_A];
            i_A++;
        } else {
            array_fuso[i_C] = array2[i_B];
            i_B++;
        }
        i_C++;
    }

    while (i_A < dim1) {
        array_fuso[i_C] = array1[i_A];
        i_C++;
        i_A++;
    }

    while (i_B < dim2) {
        array_fuso[i_C] = array2[i_B];
        i_C++;
        i_B++;
    }
}


/*
TRACCIA 7
Scrivere una funzione che dati in input due array di strutture del seguente tipo struct prodotto {char *nome; int codice; double prezzo;};
restituisce in output 1 se i due array di struct sono uguali, 0 se non lo sono.
Si noti che due dati struct sono uguali se sono uguali tutti i loro campi
 */
int controllo_due_array_prodotto(prodotto prodotto1[], int dim1, prodotto prodotto2[], int dim2) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            if (prodotto1[i].codice == prodotto2[j].codice && strcmp(prodotto1[i].nome, prodotto2[j].nome) == 0 &&
                prodotto1[i].prezzo == prodotto2[j].prezzo) {
                return 1;
            }
        }
    }
    return 0;
}


/*
TRACCIA 8
Sviluppare una function C che,
data come parametro di input una stringa che rappresentaun testo in italiano,
determina e restituisce come parametro di output il numero di parole di tre lettere contenute nel testo.
Nel testo le parole sono separate da un unico spazio.
 */
int calcola_parole_tre_lettere(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int cont = 0;
    while (tmp != NULL) {
        if (strlen(tmp) == 3) {
            cont++;
        }
        tmp = strtok(NULL, " ");
    }

    return cont;
}

/*
TRACCIA 9
Sviluppare  una  function  C  che, data  come  parametro  di  input  una  stringa  che rappresentaun  testo  in  italiano,
determina e  restituisce  come  parametro  di  output  il numero  di  parole che terminano  in are contenute nel testo.
Nel  testo  le  parole  sono separate da un unico spazio.
 */
int calcola_parole_are(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int cont = 0;
    while (tmp != NULL) {
        if (strlen(tmp) >= 3) {
            if (!strcmp(&tmp[strlen(tmp) - 3], "are")) cont++;
        }
        tmp = strtok(NULL, " ");
    }
    return cont;
}

/*
TRACCIA 10
Sviluppare  una  function  C  che,
data  come  parametro  di input  una  stringa  che rappresentaun  testo  in  italiano,
determina  e  restituisce  come  parametro  di  output  il numero di parole che iniziano con a e terminano con e contenute nel testo.
Nel testo le parole sono separateda un unico spazio.
 */
int calcola_parole_inizioA_fineE(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int cont = 0;
    while (tmp != NULL) {
        if (tmp > 0) {
            if (tmp[0] == 'a' && (tmp[strlen(tmp - 1)], 'e')) {
                cont++;
            }
        }
        tmp = strtok(NULL, " ");
    }

    return cont;
}

/*
TRACCIA11
Sviluppare  una  function  C  che,
data  come  parametro  di  input  una  stringa  che rappresenta un  testo  in  italiano,
determina  e  restituisce  come parametro di output il numero delle parole  contenute  nel  testo
che  hanno  almeno 5 vocali.
Nel  testo  le parole sono separateda un unico spazio.
 */
int controllo_vocale_parole_testo(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int contParoleVocali = 0;
    int contParole = 0;
    while (tmp != NULL) {
        for (int i = 0; i < strlen(tmp); i++) {
            if (tmp[i] == 'a' || tmp[i] == 'e' || tmp[i] == 'i' || tmp[i] == 'o' || tmp[i] == 'u') {
                contParoleVocali++;
            }
        }

        if (contParoleVocali >= 5) {
            contParole++;
        }

        tmp = strtok(NULL, "");
    }

    return contParole;
}


/*TRACCIA 12
Sviluppare una function C che,
data come parametro di input una stringa che rappresenta un testo in italiano,
determina e restituisce come parametri di output la parola di lunghezza massima contenuta nel testo e la sua lunghezza.
Nel testo le parole sono separate da un unico spazio. */
void controllo_parola_lunghezza_massima(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int lunghezzaMax = 0;
    char maxParola[100] = " ";

    while (tmp != NULL) {
        if (strlen(tmp) > lunghezzaMax) {
            lunghezzaMax = (int) strlen(tmp);
            strcpy(maxParola, tmp);
        }

        tmp = strtok(NULL, " ");
    }

    printf("La parola massima e %s lunghezza %d\n", maxParola, lunghezzaMax);
}

/*TRACCIA 13
Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la sua lunghezza.
Nel testo le parole sono separate da un unico spazio. */
void controllo_parola_lunghezza_minima(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int lunghezzaMin = -1;
    char parolaMin[100] = " ";

    while (tmp != NULL) {
        if (strlen(tmp) < lunghezzaMin) {
            lunghezzaMin = strlen(tmp);
            strcpy(parolaMin, tmp);
        }

        tmp = strtok(NULL, " ");
    }
    printf("La parola massima e %s lunghezza %d\n", parolaMin, lunghezzaMin);
}


/*
 TRACCIA 14
 Sviluppare una function C che, data come parametro di input una stringa che rappresenta un testo in italiano,
 determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la posizione di inizio della parola nella stringa.
 Nel testo le parole sono separate da un unico spazio. */
int controllo_parola_lunghezza_minima_posizione(char *stringa) {
    char *tmp = strtok(stringa, " ");
    int lunghezzaMin = -1;
    int posizioneParolaMin = 0;
    int cont = 0;
    char ParolaMin[100] = " ";

    while (tmp != NULL) {
        cont++;
        if (strlen(tmp) < lunghezzaMin) {
            lunghezzaMin = strlen(tmp);
            strcpy(ParolaMin, tmp);
            posizioneParolaMin = cont;
        }
        tmp = strtok(NULL, " ");
    }

    return posizioneParolaMin;
}


/*TRACCIA 15
 Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
 determina e restituisce come parametro di output l�array
 (di size 21) del numero delle occorrenze delle 21 lettere dell'alfabeto italiano
 (per es. il numero di occorrenze della lettera a � il numero di volte in cui la lettera a compare nel testo). */
void controllo_occorrenze_alfabeto(char *stringa) {
    char alfabeto[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'
    };
    int occorrenze[21] = {};

    for (int i = 0; i < strlen(stringa); i++) {
        for (int j = 0; j < strlen(alfabeto); j++) {
            if (stringa[i] == alfabeto[j]) {
                occorrenze[j]++;
            }
        }
    }

    for (int i = 0; i < 21; i++) printf("%c = %d\n", alfabeto[i], occorrenze[i]);
}


/*TRACCIA 16
Sviluppare una function C che, dati come parametri di input un array di char e il suo size, determina e restituisce come parametro di output l'array occorrenze (di size 21)
del numero delle occorrenze dell'evento a precede ognuna delle 21 lettere dell'alfabeto italiano (cio�occorrenze[0] � il numero di volte in cui accade che �a precede a�,
cio� che nel testo compare aa, occorrenze[1] � il numero di volte     in cui accade che �a precede b�, cio� che nel testo compare ab, occorrenze[2] � il numero di volte in cui
accade che a precede c, cio� che nel testo compare ac, �). */
void controllo_occorrenze_alfabeto_ab_ac_ecc(char *stringa) {
    char alfabeto[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'
    };
    int occorrenze[21] = {};

    for (int i = 0; i < strlen(stringa); i++) {
        for (int j = 0; j < strlen(alfabeto); j++) {
            int i_successiva = i + 1;
            if (stringa[i] == 'a' && stringa[i_successiva] == alfabeto[j]) {
                occorrenze[j]++;
            }
        }
    }

    for (int i = 0; i < 21; i++) printf("a%c = %d\n", alfabeto[i], occorrenze[i]);
}


/*
TRACCIA 17
Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
determina e restituisce come parametro di un dato logico che indica se il
testo nell’arrayèun pangramma, ovvero è un testo che contiene, almeno una volta, tutte
le 21 lettere dell’alfabeto italiano.
 */
void controllo_pangramma(char *stringa, int dim) {
    char alfabeto[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'
    };

    strlwr(stringa);

    int occorrenze[21] = {0};
    int contLettere = 0;

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < 21; j++) {
            if (stringa[i] == alfabeto[j]) {
                if (occorrenze[j] == 0) {
                    occorrenze[j] = 1;
                    contLettere++;
                }
            }
        }
    }

    if (contLettere == 21) {
        printf("La stringa e pangramma -> [%s]\n", stringa);
    } else {
        printf("La stringa non e pangramma\n");
    }
}


/*TRACCIA 18
 Sviluppare una function C che, dati come parametri di input un array di char e il suo size,
 determina e restituisce come parametro di output il carattere più frequente. */
char controllo_carattere_piu_frequente(char *stringa, int dim) {
    char alfabeto[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'
    };

    strlwr(stringa);

    int occorrenze[21] = {0};
    int max_i = -1;
    char max_c = ' ';
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < 21; j++) {
            if (stringa[i] == alfabeto[j]) {
                occorrenze[j]++;
                if (occorrenze[j] > max_i ) {
                    max_i = occorrenze[j];
                    max_c = alfabeto[j];
                }
            }
        }
    }

    printf("Il carattere piu frequente [%c] , stringa [%s]\n", max_c ,stringa);

    return max_c;
}

