#include <stdio.h>
int main() {
    int n, temp, sum = 0,q;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        q = temp % 10;
        sum = sum * 10 + q;
        temp /= 10;
    }
    if (sum == n) printf("Number is a Palindrome");
    else printf("Number is NOT a Palindrome");
    return 0;
}