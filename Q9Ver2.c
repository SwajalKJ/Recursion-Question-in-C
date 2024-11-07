#include <stdio.h>
double power(double base, int exponent);
int main() {
    double base;
    int exponent;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    printf("%.2lf raised to the power %d is: %.2lf\n", base, exponent, result);
    
    return 0;
}

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    return base * power(base, exponent - 1);
}

