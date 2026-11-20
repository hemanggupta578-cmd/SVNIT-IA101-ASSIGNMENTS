#include <stdio.h>
int main() {// i am assuming hra is 20% of basae and da is 30% of base
    float basic, hra, da, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.30 * basic;
    gross = basic + hra + da;

    printf("\nGross Salary = %f", gross);
    return 0;
}