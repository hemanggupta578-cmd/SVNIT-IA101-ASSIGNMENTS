#include <stdio.h>
int main() {
    int n, num, max, min;
    printf("Enter how many numbers (N >= 1): ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    scanf("%d", &num) ;
    max = min = num ;
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}