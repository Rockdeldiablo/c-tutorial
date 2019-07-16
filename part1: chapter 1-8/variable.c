#include <stdio.h>
#include <stdlib.h>
// esempio di dichiarazione di una variable e dell' uso della funzione sizeof().
// il nome di una variabile non può contenere spazi e caratteri speciali o iniziare con numeri o underscores,
// se la variabile ha più di 31 caratteri i restanti vengono trascurati dal compilatore.

int main() {

int var = 54444;
printf ("la variabile ha valore %d",var);
printf("\n  il numero di byte richiesti per  memorizzare variabili del tipo int è  %ld",sizeof(var));



    return 0;
}