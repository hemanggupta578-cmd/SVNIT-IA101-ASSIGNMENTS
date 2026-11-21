#include <stdio.h>
int main() {
    int n, i, num, max1, max2;
    printf("Enter how many numbers (N >= 2): ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    scanf("%d %d", &max1, &max2);
    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for (i = 2; i < n; i++) {
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num != max1) {
            max2 = num;
        }
    }
    printf("Max = %d, Second Max = %d\n", max1, max2);
    return 0;
}