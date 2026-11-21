#include <stdio.h>
int main() {
    int n, evensum = 0, oddsum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ( i % 2 == 0)
            evensum += i;
        else
            oddsum += i;
    }
    printf("Even Sum = %d\nOdd Sum = %d\n", evensum, oddsum);
    return 0;
}