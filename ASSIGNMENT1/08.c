#include <stdio.h>
int main() {
    long timeperiod = 31558150;
    int days, hours, minutes, remaining;
    days = timeperiod / 86400;
    remaining = timeperiod % 86400;
    hours = remaining / 3600;
    remaining = remaining % 3600;
    minutes = remaining / 60;
    printf("Days: %d \nHours: %d\nMinutes: %d", days, hours, minutes);
    return 0;
}