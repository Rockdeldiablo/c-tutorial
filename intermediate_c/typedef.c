#include <stdio.h>
struct point {
int x;
int y;

};
// o continui a scrivere struct point punto oppure
typedef struct point POINT;
typedef int LENGTH; // LENGTH is a new name for int

int main (void ) {
LENGTH lunghezza = 4;
POINT punto ; //struct point
POINT punti[100]; // array di struct point

POINT *pts ; // puntatore ad una struttura point

POINT fill_(); // funzione che ritorna una struttura point
POINT *fill_2(); // funzione che ritorna un puntatore point

punto.x = 1;
punto.y= 2;

printf("%d\n", punto.x);
 printf (""
 "lunghezza è invece %d\n", lunghezza);

    return 0;
}