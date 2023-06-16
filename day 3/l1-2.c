#include <stdio.h>

void print_bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;  // Start with the leftmost bit (most significant bit)

    for (i = 0; i < 32; i++) {
        // Check if the bit is set (1) or unset (0)
        int bit = (num & mask) ? 1 : 0;

        printf("%d", bit);

        // Shift the mask to the right by one position
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    print_bits(num);

    return 0;
}
