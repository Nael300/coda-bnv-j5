#include <stdio.h>
#include "functions.h"

int main() {
    int somme = add(5, 3);
    double moyenne = compute_average(11.0, 17.5, 13.0);

    printf("La somme est : %d\n", somme);
    printf("La moyenne est : %.2f\n", moyenne);

    return 0;
}
