#include <stdio.h>
int main() {
    float fahrenheit, centigrade;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    centigrade = (fahrenheit - 32) * 5.0 / 9.0;
    printf("\nTemperature in Centigrade = %f", centigrade);
    return 0;
}