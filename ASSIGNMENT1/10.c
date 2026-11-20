#include <stdio.h>
int main() {
    float Maths, Physics, Chem, Entrance, CM;
    printf("Enter marks in Maths (200), Physics (200), Chemistry (200), and Entrance (100): ");
    scanf("%f %f %f %f", &Maths, &Physics, &Chem, &Entrance);
    CM = (Maths / 2) + (Physics / 2) + (Chem / 2) + Entrance;
    printf("Cut-Off Mark (CM) = %f\n", CM);
    return 0;
}