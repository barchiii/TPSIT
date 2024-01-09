/* Dato un numero N intero positivo, 
stampare la somma dei primi N numeri primi alternati (uno sì e uno no) */

/* Given a positive integer N, 
print the sum of the first N prime numbers alternated (one yes, one no). */

#include <stdio.h>

void main()
{
    int N, somma = 0, num = 2, cont = 0, primo = 0, i;

    // "Input the number N."
    do
    {
        printf("Inserisci un numero intero positivo N: \n");
        scanf("%d", &N);

        // Check
        if (N <= 0)
            printf("Il numero deve essere positivo. Riprova \n");
        
    } while (N <= 0);

    // "Calculation of the sum of the first prime numbers alternated up to N."
    while (num <= N)
    {
        primo = 1; // "The number is prime."

        // "Check if the number is divisible."
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
                primo = 0;
        }

        if (primo==1)
        {
            cont++;
            if (cont % 2 == 1)
            {
                printf("Il numero primo alternato è: %d\n", num);
                somma += num;
            }
        }

        num++;
    }

    // Output
    printf("La somma dei primi numeri primi alternati è: %d\n", N, somma);

}
