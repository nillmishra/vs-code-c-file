#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c) {
    float discriminant, root1, root2;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The quadratic equation has two distinct real roots:\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("The quadratic equation has one real root:\n");
        printf("Root: %.2f\n", root1);
    } else {
        printf("The quadratic equation has no real roots.\n");
    }
}

int main() {
    float coeff_a, coeff_b, coeff_c;

    printf("Enter the coefficient of x^2: ");
    scanf("%f", &coeff_a);

    printf("Enter the coefficient of x: ");
    scanf("%f", &coeff_b);

    printf("Enter the constant term: ");
    scanf("%f", &coeff_c);

    find_roots(coeff_a, coeff_b, coeff_c);

    return 0;
}
