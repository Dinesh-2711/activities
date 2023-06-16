#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    int sum = 0;
    for (i = 0; i < size; i += 2) {
        sum += array[i];
    }
    
    printf("Sum of every alternate element starting from element 0: %d\n", sum);
    
    return 0;
}
