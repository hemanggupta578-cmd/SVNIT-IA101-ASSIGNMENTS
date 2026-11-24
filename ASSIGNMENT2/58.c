#include <stdio.h>
int main() {
    int n, key, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d .\n", key, i);
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("%d not found in the array.\n", key);
    }
    return 0;
}