#include <stdio.h>
int main() {
    int n;
    double sum = 1.0, term = 1.0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        term /= (i - 1);
        sum += term;
    }
    printf("Sum of series = %lf\n", sum);
    return 0;
}