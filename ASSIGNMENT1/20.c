#include <stdio.h>
int main() {
    int flag;
    float a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &flag);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch (flag) {
        case 1:
            printf("Sum = %f", a + b);
            break;
        case 2:
            printf("Difference = %f", a - b);
            break;
        case 3:
            printf("Product = %f", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Quotient = %f ", a / b);
            else
                printf("Error");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}