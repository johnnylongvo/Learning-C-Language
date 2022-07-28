#include <stdio.h>
#include <math.h>

// find hypotenuse of a right triangle


int main() {

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);
    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B); // C = SQUAREROOT(A^2 + B^2)

    printf("Side C: %lf\n", C);

    return 0;
}