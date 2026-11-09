#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3) {
    return (nb1 + nb2 + nb3) / 3.0;
}

int main() {
    double resultat = compute_average(10.0, 15.0, 20.0);
    printf("La moyenne est : %.2f\n", resultat);
    return 0;
}
