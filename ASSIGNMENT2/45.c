#include <stdio.h>
int main() {
    int arr[10], pos = 0, neg = 0, zero = 0;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos++;
        }
        else if (arr[i] < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);
    return 0;
}