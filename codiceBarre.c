/* I codici a barre dei prodotti sono composti da 13 cifre, 
di cui l'ultima e' una cifra di controllo che si determina 
a partire dalle prime 12 (il codice vero e proprio) applicando le seguenti regole:
1)moltiplicare per 3 tutte le cifre in posizione dispari;
2)moltiplicare per 1 tutte le cifre in posizione pari;
3)sommare tra loro tutti i 12 valori così ottenuti;
4)calcolare il resto della divisione per 10 della somma ottenuta;
Codificare in linguaggio C un programma che, 
a paqrtire da un vettore di 12 elementi corrispondenti alle cifre 
di un codice a barre restituisca la cifra di controllo. */

#include <stdio.h>

void main() {
    //dichiarazione delle variabili
    int dim = 12;
    int vet[dim];
    int cifraControllo = 0, sommaTot = 0;

    for (int i = 0; i < dim; i++) {
        printf("\nInserisci la cifra %d del codice a barre\n", i);
        scanf("%d", vet + i);
    }

    //moltiplica dispari
    int sommaDispari = 0;
    for (int i = 1; i < dim; i += 2) {
        sommaDispari = sommaDispari + (vet[i] * 3);
    }

    //moltiplica pari
    int sommaPari = 0;
    for (int i = 0; i < dim; i += 2) {
        sommaPari = sommaPari + (vet[i] * 1);
    }

    //somma tutto
    int somma = 0;
    for (int i = 0; i < dim; i++) {
        somma = somma + vet[i];
    }

    //resto
    sommaTot = sommaDispari + sommaPari + somma;
    cifraControllo = sommaTot % 10;

    //output
    printf("\nLa 13esima cifra di controllo e': %d", cifraControllo);
}