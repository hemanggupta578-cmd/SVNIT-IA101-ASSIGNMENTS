#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Number is neither Prime nor Composite.\n", n);
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Number is a Prime number");
    else
        printf("Number is a Composite number");

    return 0;
}