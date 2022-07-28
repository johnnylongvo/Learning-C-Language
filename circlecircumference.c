#include <stdio.h>

int main() {

    const double PI = 3.14159; // const to not change value of pi
    double radius; // calculate radius
    double circumference;   // calculating circumference
    double area;    // calculate area

    printf("Enter radius of a circle (meters): ");
    scanf("%lf", &radius); // double format specifier = %lf 

    circumference = 2 * PI * radius;
    area = PI * radius * radius; // Area = PI(Radius^2)

    printf("circumference: %lf meters\n" , circumference);
    printf("area: %lf square meters\n" , area);

    return 0;
}