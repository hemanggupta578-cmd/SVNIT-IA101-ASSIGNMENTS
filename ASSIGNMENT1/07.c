#include <stdio.h>
int main() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = (base * height)/2;
    printf("Area of Triangle = %f\n", area);
    return 0;
}