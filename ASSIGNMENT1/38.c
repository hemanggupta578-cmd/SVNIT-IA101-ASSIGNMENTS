#include <stdio.h>
int main() {
    int n;
    printf("Enter upper limit N: ");
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++) {
        printf("%d ", i * i);
    }
    return 0;
}