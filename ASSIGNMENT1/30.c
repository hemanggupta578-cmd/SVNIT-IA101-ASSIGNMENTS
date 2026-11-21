#include <stdio.h>
int main() {
    int n, q = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        q = q * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d\n", q);
    return 0;
}