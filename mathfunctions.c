#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double A = sqrt(9); //sqaure root
    double B = pow(2, 4); // power
    int C = round(3.14); // round 
    int D = ceil(3.14); // round # up
    int E = floor(3.99); // round # down
    double F = fabs(-100); // how far a # is from 0
    double G = log(3);  // log
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("sqrt(9) = %lf\n", A);
    printf("pow(2, 4) = %lf\n", B);
    printf("round(3.14) = %d\n", C);
    printf("ceil(3.14) = %d\n", D);
    printf("floor(3.99) = %d\n", E);
    printf("fabs(-100) = %lf\n", F);
    printf("log(3) = %lf\n", G);
    printf("sin(45) = %lf\n", H);
    printf("cos(45) = %lf\n", I);
    printf("tan(45) = %lf\n", J);

    return 0;
}