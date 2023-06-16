#include <stdio.h>

void print_exponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    unsigned long long hexExponent = exponent;
    
    printf("Exponent in Hexadecimal: 0x%llX\n", hexExponent);
    
    printf("Exponent in Binary: 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%lld", bit);
    }
    printf("\n");
}

int main() {
    double x;

    printf("Enter a double number: ");
    scanf("%lf", &x);

    printf("Original Number: %f\n", x);
    print_exponent(x);
    
    return 0;
}
