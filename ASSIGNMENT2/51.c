#include <stdio.h>
int main() {
    int n,tamp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        tamp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tamp;
    }
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}