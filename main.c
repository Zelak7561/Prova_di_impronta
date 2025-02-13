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
TRACCIA4
Sviluppare una function C che, dati come parametri di input un array2D di double, il numero delle righe e il numero delle colonne,
determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni colonna.
 */
double somm_colonne(double array[][3] , int colonne , int righe);





int main(void) {
    //Traccia 1
    int arraySecondoMax[] = {2 ,3 ,4 ,5};
    int c = secondoMax(arraySecondoMax , 3);
    printf("--TRACCIA 1--\n");
    printf("Il secondo numero piu grande e %d\n" , c);

    printf("\n");


    //Traccia 2
    printf("--TRACCIA 2--\n");
    PuntoMin puntiMin[4] = {
        {1.0, 2.0},
        {3.5, 4.5},
        {5.0, 6.0},
        {7.5, 8.5}
    };
    distmin(puntiMin , 4);

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


    //Traccia 4
    printf("--TRACCIA 4--\n");
    double array[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };
    double r = somm_colonne(array , 3 , 3);
    // printf("Somma colonne [%2.2f]\n" , r);



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
Sviluppare una function C che, dato come parametro di input un array di tipo struct puntodouble x; double y;
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
TRACCIA4
Sviluppare una function C che, dati come parametri di input un array2D di double, il numero delle righe e il numero delle colonne,
determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni colonna.
 */
//Traccia 4

double somm_colonne(double array[][3] , int colonne , int righe) {
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

    printf("Somma colonne [%2.2f]\n" , max);
    return max;
}











