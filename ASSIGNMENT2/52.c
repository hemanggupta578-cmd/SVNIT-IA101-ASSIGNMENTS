#include <stdio.h>
int main() {
    int a[3][3], max, min;
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = min = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) max = a[i][j];
            if (a[i][j] < min) min = a[i][j];
        }
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}