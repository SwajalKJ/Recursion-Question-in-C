#include <stdio.h>
double power(double base, int exponent);
int main() {
    double base;
    int exponent;
    
    // Input base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Compute the power
    double result = power(base, exponent);
    
    // Output the result
    printf("%.2lf raised to the power %d is: %.2lf\n", base, exponent, result);
    
    return 0;
}

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
