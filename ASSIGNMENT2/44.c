#include <stdio.h>
int main() {
    int arr[10], even = 0, odd = 0;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nEven count = %d, Odd count = %d", even, odd);
    return 0;
}