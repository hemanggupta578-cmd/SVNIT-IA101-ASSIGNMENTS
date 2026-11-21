#include <stdio.h>
int main() {
    int num, temp, q, sum = 0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        q = temp % 10;
        sum += q * q * q;
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);
    return 0;
}