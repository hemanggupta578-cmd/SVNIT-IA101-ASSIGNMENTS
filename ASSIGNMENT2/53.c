#include <stdio.h>
int main() {
    int a[3][3], rowsum;
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        rowsum = 0;
        for (int j = 0; j < 3; j++) {
            rowsum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowsum);
    }
    return 0;
}