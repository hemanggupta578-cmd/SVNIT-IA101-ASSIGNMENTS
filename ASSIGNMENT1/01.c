#include <stdio.h>
int main (){
float p, r ,t;
printf("Enter the principle amount:");
scanf("%f",&p);
printf("Enter rate of interest:");
scanf("%f",&r);
printf("Enter time investsed:");
scanf("%f",&t);
printf("simple interest is %f\n", p*r*t/100);
    return 0;
}