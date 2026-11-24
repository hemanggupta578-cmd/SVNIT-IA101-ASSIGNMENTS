#include <stdio.h>
int main() {
    int n, max1, max2;
    printf("Enter N (N >= 2): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter arrray elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {//for only 2elementd
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("\nMax = %d, Second Max = %d", max1, max2);
    return 0;
}