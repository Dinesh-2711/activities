#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char *ptr1 = (char *)a;
    char *ptr2 = (char *)b;
    
    while (size--) {
        char temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2++ = temp;
    }
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After Swap: a = %d, b = %d\n", a, b);
    
    float x, y;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &x, &y);
    printf("Before Swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(float));
    printf("After Swap: x = %f, y = %f\n", x, y);
    
    return 0;
}
