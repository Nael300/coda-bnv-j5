#include <stdio.h>
#include "operations.h"

int main(void) {
    int a = 12;
    int b = 4;

    printf("=== Test de la calculatrice refactorisee ===\n");
    printf("Addition (%d + %d) = %d\n", a, b, add(a, b));
    printf("Soustraction (%d - %d) = %d\n", a, b, sub(a, b));
    printf("Multiplication (%d * %d) = %d\n", a, b, mul(a, b));
    printf("Division (%d / %d) = %.2f\n", a, b, division(a, b));

    return 0;
}
