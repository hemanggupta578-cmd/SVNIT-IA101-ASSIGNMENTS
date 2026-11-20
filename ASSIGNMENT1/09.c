#include <stdio.h>
int main() {
    int hour, min, sec;
    long totalsec;
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &hour, &min, &sec);
    totalsec = (hour * 3600) + (min * 60) + sec;
    printf("\nTotal Seconds = %ld", totalsec);
    return 0;
}   