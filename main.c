#include <stdio.h>

/*
TRACCIA 1
Sviluppare una function C che, dati come parametri di input un array di int e il suo size,
determina  e  restituisce  come  parametro  di  output  il  secondo più  grande elemento dell’array(N.B.:nonbisogna seguire l’idea di ordinare primal’array).
 */
int secondoMax(int array[] , int dim);

/*
TRACCIA 2
Sviluppare una function C che, dato come parametro di input un array di tipo struct punto double x; double y;
e il suo size, determina e restituisce come parametri di output  gli indici dei  due  punti che hanno distanza minima tra loro.
I campi x e y contengono l’ascissa e l’ordinata, rispettivamente, di un punto.
 */

#include <math.h>
typedef struct{
    double x;
    double y;
} Punto;

void distmin(Punto punti[] , int dim);


int main(void) {

    //Traccia 1
    // int array[] = {2 ,3 ,4 ,5};
    // int c = secondoMax(array , 3);
    // printf("%d" , c);

    //Traccia 2
    Punto punti[4] = {
        {1.0, 2.0},
        {3.5, 4.5},
        {5.0, 6.0},
        {7.5, 8.5}
    };
    distmin(punti , 4);

    return 0;
}

//Traccia 1
int secondoMax(int array[] , int dim) {
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
e il suo size, determina e restituisce come parametri di output gli indici dei due punti che hanno distanza minima tra loro.
I campi x e y contengono l’ascissa e l’ordinata, rispettivamente, di un punto.
 */

double calcola_dist_min(Punto p1 , Punto p2) {
    return sqrt(pow(p2.x - p1.x , 2) + pow(p2.y - p1.y , 2));
}

void distmin(Punto punti[], int dim) {

    if (dim >= 2) {
        double dist;
        double dist_min = -1.0;
        int p1 = 0;
        int p2 = 0;
        for (int i = 0; i < dim - 1; i++) {
            int indice_corrente = i;
            dist = calcola_dist_min(punti[indice_corrente + 1] , punti[indice_corrente]);
            if (dist_min == -1 || dist < dist_min) {
                p1 = indice_corrente;
                p2 = indice_corrente + 1;
                dist_min = dist;
            }
        }
        printf("P1[%d] P2[%d]\nDistanza[%1.1f]\n" , p1 , p2 , dist_min);
    } else {
        printf("Sono neccesari 2 punti per il calcolo della distanza minima!!\n");
    }

}







