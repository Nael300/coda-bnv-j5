#include <stdio.h>
#include "operations.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;
}

void somme_utilisateur(void) {
    int somme = 0;
    int saisie = -1;

    while (saisie != 0) {
        printf("Choisissez un nombre ?\n");
        if (scanf("%d", &saisie) != 1) {
            break;
        }
        
        somme = add(somme, saisie);
        printf("Somme actuelle : %d\n", somme);
    }
    printf("Fin des opérations\n");
}
