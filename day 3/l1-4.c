#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i, j, digit;

    for (i = 0; i < n; i++) {
        int currentNum = numbers[i];
        while (currentNum > 0) {
            digit = currentNum % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            currentNum /= 10;
        }
    }

    if (smallest == INT_MAX || largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}
