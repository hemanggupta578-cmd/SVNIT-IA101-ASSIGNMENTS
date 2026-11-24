#include <stdio.h>
int main() {
    int a[10], b[10], c[10];
    printf("Enter Array 1 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter Array 2 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    printf("Sum Array: ");
    for (int i = 0; i < 10; i++) {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
    return 0;
}