#include <stdio.h>
int main() {
    int n, key, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter arary elements: ");
    for (int i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
    } 
    printf("Enter element to count: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag++;
        }
    }
    printf("Occurrence of %d = %d\n", key, flag);
    return 0;
}