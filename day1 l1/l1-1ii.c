#include <stdio.h>

int find_biggest_ternary_operator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int result_ternary_operator = find_biggest_ternary_operator(num1, num2);
    printf("Using ternary operator: %d\n", result_ternary_operator);

    return 0;
}
