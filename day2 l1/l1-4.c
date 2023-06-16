#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    
    return count;
}

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    unsigned int array[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%x", &array[i]);
    }
    
    int totalSetBits = 0;
    for (i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }
    
    printf("Total number of set bits in the given array: %d\n", totalSetBits);
    
    return 0;
}
