#include <stdio.h>

int add(int nb1, int nb2) {
    return nb1 + nb2;
}

int main() {
    int resultat = add(5, 3);
    printf("La somme est : %d\n", resultat);
    return 0;
}
