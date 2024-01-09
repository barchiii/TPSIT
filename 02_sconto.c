/* Su una somma di denaro (relativa all'acquito di un prodotto)
 si vuole applicare uno sconto in base all'importo inserito seguendo il seguente schema:
        da 0 a 500 sconto del 10%;
        da 501 a 1000 sconto del 20%;
        oltre i 1001 sconto 30%;
 Il programma dopo aver calcolato e visualizzato a video lo sconto ed il prezzo netto 
 deve permettere di re-inserire ulteriori somme di denaro. */

/* On a sum of money (related to the purchase of a product), 
a discount is desired based on the entered amount following the following scheme:
	- From 0 to 500, a discount of 10%;
	- From 501 to 1000, a discount of 20%;
	- Above 1001, a discount of 30%.
The program, after calculating and displaying the discount and net price on the screen, 
should allow for the re-insertion of additional sums of money. */

#include <stdio.h>

void main() {	
    // Variable declaration
    float importo, sconto, importoSottratto, importoFinale;
    char continua;

    do {
        // Amount input
        printf("Inserisci l'importo dell'articolo: ");
        scanf("%f", &importo);

        // Discount calculation based on the amount
        if (importo <= 500) {
            sconto = 0.10;
        } 
		else if (importo <= 1000) {
            sconto = 0.20;
        } 
		else {
            sconto = 0.30;
        }

        // Calculation of discounted amount and net price
        importoSottratto = importo * sconto;
        importoFinale = importoFinale + importo - importoSottratto;

        // Output
        printf("Sconto applicato: %.2f%%\n", sconto * 100);
        printf("Importo sottratto: %.2f\n", importoSottratto);
        printf("Importo parziale: %.2f\n", importoFinale);

        // Ask if you want to enter another sum of money
        printf("Vuoi inserire un'altra somma di denaro? (s/n): ");
        scanf(" %c", &continua);

    } while (continua == 's' || continua == 'S');
    
    printf("\n");
    printf("Importo finale : %.2f\n", importoFinale);
    printf("Arrivederci e grazie per aver acquistato da noi!\n");
}

