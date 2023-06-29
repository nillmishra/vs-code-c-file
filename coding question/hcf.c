#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int hcf(int a, int b) {
    return gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int result = hcf(num1, num2);

    printf("The HCF of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
