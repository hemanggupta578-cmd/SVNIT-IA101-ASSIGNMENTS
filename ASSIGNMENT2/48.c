#include <stdio.h>
int main() {
    int a[10], b[10], tamp;
    printf("Enter 10 integers for Array 1: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter 10 integers for Array 2: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++) {
        tamp = a[i];
        a[i] = b[i];
        b[i] = tamp;
    }
    printf("After Swapping:\nArray 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}